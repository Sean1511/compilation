#include "functions.h"
#include <stddef.h>
#include <ctype.h>

scopeNode* topStack = NULL;
int GlobalScope = 0;
int ERROR = 0;
int var = 0;
int label = 1;


void addNode(node** father, node* son) {
	if ((*father)->count == 0) {
		(*father)->nodes = (node**)malloc(sizeof(node*));
		(*father)->nodes[(*father)->count] = son;
		(*father)->count++;
	}
	else {
		(*father)->nodes = (node**)realloc((*father)->nodes, ((*father)->count+1)*sizeof(node*));
		(*father)->nodes[(*father)->count] = son;
		(*father)->count++;
	}
}


void printtree(node* tree, int tab) {
	int i;
	char* token = tree->token;

	if (*token) {
		for (i = 0; i < tab; i++) {
			printf("\t");
		}
		printf("(%s\n", token);
	}

	else
		tab -= 1;
	if (tree->nodes) {
		for (int j = 0; j < tree->count; j++) {
			printtree(tree->nodes[j], tab + 1);
		}
	}
	for (i = 0; i < tab; i++) {
		printf("\t");
	}
	if (*token)
		printf(")\n");
}


node* mknode(char* token) {
	node *newnode = (node*)malloc(sizeof(node));
	char *newstr = (char*)malloc(sizeof(token) + 1);
	strcpy(newstr, token);
	newnode->token = newstr;
	newnode->nodes = NULL;
	newnode->val_type = NULL;
	newnode->father = NULL;
	newnode->count = 0;
	newnode->line = 0;
	newnode->var = NULL;
	newnode->code = "";
	return newnode;
}


void mknodelist(node* father, node* son) {
	node* temp = son;
	addNode(&father, mknode(son->token));
	while (temp->nodes) {
		temp = temp->nodes[0];
		addNode(&father, mknode(temp->token));
	}
}


node* integrate(char* token, node* one, node* two) {
	int i = 0, j = 0;
	node* new = (node*)malloc(sizeof(node));
	new->token = strdup(token);
	new->count = one->count + two->count;
	if (one->count == 0)
		new->count++;
	if (two->count == 0)
		new->count++;
	new->nodes = (node**)malloc(sizeof(node*) * new->count);
	if (one->count == 0)
		new->nodes[j++] = one;
	else {
		for (j, i = 0; i < one->count; j++, i++) {
			new->nodes[j] = one->nodes[i];
		}
		free(one);
	}
	if (two->count == 0)
		new->nodes[j++] = two;
	else {
		for (j, i = 0; i < two->count; j++, i++) {
			new->nodes[j] = two->nodes[i];
		}
		free(two);
	}
	return new;
}


void addlist(node* root, node* arr){
	if (arr->count == 0){
		addNode(&root, arr);
	}
	else{
		for (int i =0; i< arr->count;i++){
			addNode(&root,arr->nodes[i]);
		}
	}
}


void semanticAnalysis(node* root){
	printf("\n");
	pushStat(root, 0);
	isSymbolExist(topStack);
	if (ERROR > 0)
		printf("%d Errors found\n\n",ERROR);
	else 
		printInfo(root);
}


void pushStat(node* root, int level){
	if (root == NULL)
		return;
	else if (!strcmp(root->token, "CODE")){
		level++;
        pushScopeToStack(&topStack, "GLOBAL" ,NULL, root->nodes, level, root->count);
	}
	else if(!strcmp(root->token, "MAIN")){
        level++;
        pushScopeToStack(&topStack, "MAIN" ,NULL, root->nodes[0]->nodes, level, root->nodes[0]->count);
	}
	else if(!strcmp(root->token,"FUNCTION")){
        level++;
        pushScopeToStack(&topStack,"FUNCTION",root->nodes[1], root->nodes[3]->nodes, level, root->nodes[3]->count);
        checkFuncReturn(root);
	}
	else if (!strcmp(root->token, "IF")){
		level++;
		pushScopeToStack(&topStack, "IF" ,NULL, root->nodes[1]->nodes, level, root->nodes[1]->count);
		char* evalType = EvaluateExp(root->nodes[0]);
		if(strcmp("BOOL" ,evalType)){
			ERROR++;
			printf("[line:%d] IF-condition must return type BOOL\n",root->line);
		}
	}
	else if (!strcmp(root->token, "WHILE")){
		level++;
		pushScopeToStack(&topStack, "WHILE" ,NULL, root->nodes[1]->nodes, level, root->nodes[1]->count);
		char* evalType = EvaluateExp(root->nodes[0]);
		if(strcmp("BOOL" ,evalType)){
			ERROR++;
			printf("[line:%d] WHILE-condition must return type BOOL\n", root->line);
		}
	}
	else if (!strcmp(root->token, "DO-WHILE")){
		level++;
		pushScopeToStack(&topStack, "DO-WHILE" ,NULL, root->nodes[0]->nodes, level, root->nodes[0]->count);
		char* evalType = EvaluateExp(root->nodes[1]);
		if(strcmp("BOOL" ,evalType)){
			ERROR++;
			printf("[line:%d] DO-WHILE-condition must return type BOOL\n", root->line);
		}
	}
	else if (!strcmp(root->token, "FOR")){
		level++;
		pushScopeToStack(&topStack, "FOR" ,NULL, root->nodes[3]->nodes, level, root->nodes[3]->count);
		char* initType = EvaluateExp(root->nodes[0]);
		if(strcmp("INT" ,initType)){
			ERROR++;
			printf("[line:%d] FOR-init must initialized with type INT\n", root->nodes[0]->line);
		}
		char* evalType = EvaluateExp(root->nodes[1]);
		if(strcmp("BOOL" ,evalType)){
			ERROR++;
			printf("[line:%d] FOR-condition must return type BOOL\n", root->nodes[0]->line);
		}
		char* incType = EvaluateExp(root->nodes[2]);
		if(strcmp("INT" ,incType)){
			ERROR++;
			printf("[line:%d] FOR-increment must return type INT\n", root->nodes[0]->line);
		}
	}
	else if (!strcmp(root->token, "BLOCK") && root->father == NULL){
		level++;
		pushScopeToStack(&topStack, "BLOCK" ,NULL, root->nodes, level, root->count);
	}

	for (int i = 0; i < root->count; i++){
		pushStat(root->nodes[i], level);
	}
}


void pushScopeToStack(scopeNode** top, char* name, node* params, node** statements, int level, int stat_size){      
	scopeNode* new_scope = (scopeNode*) malloc(sizeof(scopeNode));
	new_scope->scopeName = (char*)(malloc (sizeof(name) + 1));
	strncpy(new_scope->scopeName, name, sizeof(name)+1);
	GlobalScope++;
	new_scope->scopeNum = GlobalScope;
	new_scope->scopeLevel=level-1;
	new_scope->next = (*top);
	(*top) = new_scope;
	if (params){
		pushSymbols(params);
	}
	pushScopeStatements(statements, stat_size);
}


void pushScopeStatements(node** statements, int size){
	for (int i = 0;i < size;i++){
		if(!strcmp(statements[i]->token, "VAR")){
			pushSymbols(statements[i]);
		}

		else if (!strcmp(statements[i]->token, "FUNCTION")){
			pushToTable(&topStack,statements[i]->nodes[0]->token, statements[i]->nodes[2]->token,NULL,1, statements[i]->nodes[1]);
		}

		else if (!strcmp(statements[i]->token, "FUNC_CALL")){
			checkFunctionCall(statements[i]->nodes[0]->token, statements[i]->nodes[1]);
		}

		else if(!strcmp(statements[i]->token, "=")){
        	if (isDeclared(statements[i]->nodes[0]->token) && strcmp(statements[i]->nodes[0]->token,"PTR")){
                char *left = scopeSearch(statements[i]->nodes[0]->token)->type;
                char *right = EvaluateExp(statements[i]->nodes[1]);
				if (!strcmp(left, "STRING"))
					checkString(statements[i], right);
				else if (strcmp(left, "STRING") && statements[i]->nodes[0]->count > 0){
					ERROR++;
					printf("[line:%d] %s can not have index\n", statements[i]->nodes[0]->line, left);
				}
				else if (!strcmp(right, "NULL") && (strcmp(left, "INT*") && strcmp(left, "CHAR*") && strcmp(left, "REAL*"))){
					ERROR++;
					printf("[line:%d] Assignment Error mismatch: can not assign %s to %s\n", statements[i]->line, right, left);
				}
            	else if (strcmp(right,left) && strcmp(right,"undefined")){
					ERROR++;
                    printf("[line:%d] Assignment Error mismatch: can not assign %s to %s\n", statements[i]->line, right, left);
				}
			}
			else if (!strcmp(statements[i]->nodes[0]->token,"PTR") && isDeclared(statements[i]->nodes[0]->nodes[0]->nodes[0]->token))
				evalPtr(statements[i]);
			else{
				EvaluateExp(statements[i]->nodes[1]);
				ERROR++;
				printf("[line:%d] Undeclared variable [%s]\n", statements[i]->line, statements[i]->nodes[0]->token);
			}
		}
	}
}


void evalPtr(node* ptrNode){
	char *left = EvaluateExp(ptrNode->nodes[0]);
	char *right = EvaluateExp(ptrNode->nodes[1]);
	if (strcmp(right,left)){
		ERROR++;
		printf("[line:%d] Assignment Error mismatch: can not assign %s to %s\n", ptrNode->line, right, left);
	}
}


void pushSymbols(node* decleration){
	for(int i = 0; i<decleration->count;i++){
		pushNodesToSymtable(decleration->nodes[i]->token, decleration->nodes[i]->nodes, decleration->nodes[i]->count);
	}
}


void pushNodesToSymtable(char* type, node** vars, int size){
	for(int i = 0;i < size; i++){
		if (strcmp(vars[i]->token, "=") && strcmp(type, "STRING") == 0){
			char* evalType = EvaluateExp(vars[i]->nodes[0]->nodes[0]);
			if(strcmp("INT", evalType)){
				ERROR++;
				printf("[line:%d] Size of string must be type INT not %s\n", vars[i]->line, evalType);
			}
			else
				pushToTable(&topStack, vars[i]->token, type, NULL, 0, NULL);
		}
		else if ((!strcmp(vars[i]->token, "=") && strcmp(type, "STRING") == 0)){
			char* evalType = EvaluateExp(vars[i]->nodes[0]->nodes[0]->nodes[0]);
			if(strcmp("INT", evalType)){
				ERROR++;
				printf("[line:%d] Size of string must be type INT not %s\n", vars[i]->nodes[0]->line, evalType);
			}
			else {
				evalType = EvaluateExp(vars[i]->nodes[1]);
				if (!strcmp(type,evalType))
					pushToTable(&topStack, vars[i]->nodes[0]->token, type, vars[i]->nodes[1]->token, 0, NULL);
				else{
					ERROR++;
					printf("[line:%d] Assignment Error mismatch: can not assign %s to %s\n", vars[i]->nodes[0]->line, evalType, type);
				}
			}
		}

		else if ((!strcmp(vars[i]->token, "=") && vars[i]->nodes[1]->val_type != NULL && !strcmp("NULL", vars[i]->nodes[1]->val_type)))
			if (strcmp(type, "INT*") && strcmp(type, "CHAR*") && strcmp(type, "REAL*")){
				ERROR++;
				printf("[line:%d] Assignment Error mismatch: can not assign NULL to %s\n", vars[i]->line, type);
			}
			else
				pushToTable(&topStack, vars[i]->nodes[0]->token, type, vars[i]->nodes[1]->token, 0, NULL);
		else{
			if (strcmp(vars[i]->token, "="))
				pushToTable(&topStack, vars[i]->token, type, NULL, 0, NULL);
			else{
				char* evalType = EvaluateExp(vars[i]->nodes[1]);
				if (!strcmp(type,evalType))
					pushToTable(&topStack, vars[i]->nodes[0]->token, type, vars[i]->nodes[1]->token, 0, NULL);
				else {
					ERROR++;
					printf("[line:%d] Assignment Error mismatch: can not assign %s to %s\n", vars[i]->nodes[0]->line, evalType, type);
				}
			}	
		}
	}
}


void pushToTable(scopeNode** top, char* id, char* type, char* data, int isFunc, node* params){
	symbolNode* new_node = (symbolNode*) malloc(sizeof(symbolNode));
	new_node->isFunc = isFunc;
	new_node->id = (char*)(malloc (sizeof(id) + 1));
	strncpy(new_node->id, id, sizeof(id)+1);
	if (data != NULL) {
		new_node->data = (char*)(malloc (sizeof(data) + 1));
		strncpy(new_node->data, data, sizeof(data)+1);
	}
	else
		new_node->data = NULL;
	new_node->type = (char*)(malloc (sizeof(type) + 1));
	strncpy(new_node->type, type, sizeof(type)+1);
	new_node->scopeID=(*top)->scopeNum;
	if (params != NULL) {
		new_node->params = (node*)(malloc(sizeof(node)));
		memcpy(new_node->params, params, sizeof(node));
	}
	else
		new_node->params = NULL;
	new_node->next =(*top)->symbolTable;
	(*top)->symbolTable = new_node;
}


int isDeclared(char* id){
	symbolNode *symbol = scopeSearch(id);
	if (symbol != NULL)
		return 1;
	return 0;
}


symbolNode* symbolSearch (symbolNode* symTable, char* id){
    symbolNode* current = symTable;
    while (current != NULL)
    {
        if (!strcmp(current->id, id)){
            return current;
        }
        current = current->next;
    }
    return NULL;
}


symbolNode* scopeSearch(char* id){
	scopeNode* current = topStack;
	symbolNode* res;
	int currLevel;
	while (current != NULL){
		currLevel = current->scopeLevel;
		res = symbolSearch(current->symbolTable, id);
		if (res != NULL)
			return res;
		if (currLevel == 0)
			return NULL;
		
		while (current->scopeLevel > 0 && current->scopeLevel >= currLevel)
			current = current->next;
	}
	return NULL;
}


int checkFunctionCall(char *funcName, node *callArgs){
    symbolNode *funcSymbol = scopeSearch(funcName);
	if (funcSymbol !=NULL)
		if (checkFunctionArgs(funcSymbol->params, callArgs))
			return 1;
	ERROR++;		
    printf ("[line:%d] Undeclared function (%s) with unmatching arguements\n", callArgs->line,funcName);
    return 0; 
}


int checkFunctionArgs(node* params, node* callArgs){
	if (!strcmp(params->token,"ARGS_NONE") && !strcmp(callArgs->token,"ARGS_NONE"))
		return 1;
	int count = 0;
	for (int i = 0;i<params->count;i++)
		count += params->nodes[i]->count;
	if(count != callArgs->count)
		return 0;
	int k = 0;
	for (int i = 0;i<params->count;i++){
		for(int j = 0; j < params->nodes[i]->count;j++){
			if (strcmp(params->nodes[i]->token, EvaluateExp(callArgs->nodes[k++])))
				return 0;
		}
	}
	return 1;
}


int checkFuncReturn(node *funcNode){
    char *funcType = funcNode->nodes[2]->token;
    int ans = evalReturn(funcNode->nodes[3], funcType);	
    if (!strcmp(funcType,"VOID") && ans == 0){
		ERROR++;
        printf ("[line:%d] Void function (%s) cannot return value\n", funcNode->line, funcNode->nodes[0]->token);
        return 0;
    }
    else if (ans == 0){
		ERROR++;
        printf ("[line:%d] Function (%s) return invalid value\n", funcNode->line ,funcNode->nodes[0]->token);
        return 0;
    }
    return 1;
}


void checkString(node* strNode, char* assType){
	if(strcmp(assType,"CHAR") && strNode->nodes[0]->count != 0 && !strcmp(strNode->nodes[0]->nodes[0]->token, "INDEX")){
		ERROR++;
		printf("[line:%d] Assignment Error mismatch: must assign CHAR to cell of string array not %s\n", strNode->nodes[0]->line ,assType);
	}
	if (strNode->nodes[0]->count != 0 && !strcmp(strNode->nodes[0]->nodes[0]->token, "INDEX")){
		char* indexType = EvaluateExp(strNode->nodes[0]->nodes[0]->nodes[0]);
		if(strcmp("INT", indexType)){
			ERROR++;
			printf("[line:%d] Size of string must be type INT not %s\n", strNode->nodes[0]->line ,indexType);
		}
	}
	if (strNode->nodes[0]->count == 0){
		if(strcmp("STRING", assType)){
			ERROR++;
			printf("[line:%d] Assignment Error mismatch: cannot assign %s to STRING\n", strNode->nodes[0]->line ,assType);
		}
	}
}


int evalReturn(node* funcNode, char* type){
	for (int i=0;i<funcNode->count;i++){
		if(!strcmp(funcNode->nodes[i]->token, "RET")){
			if(funcNode->nodes[i]->count == 0 && strcmp(type, "VOID")){
				return 0;
			}
			else if (funcNode->nodes[i]->count > 0){
				char* val = EvaluateExp(funcNode->nodes[i]->nodes[0]);
				if (strcmp(val, type))
					return 0;
			}
		}
		if(strcmp(funcNode->nodes[i]->token, "FUNCTION"))
			if(evalReturn(funcNode->nodes[i], type)==0)
				return 0;
	}
	return 1;
}


char* EvaluateExp(node* exp){
	if (exp->val_type != NULL && !strcmp(exp->val_type, "ID")){
		symbolNode* node = scopeSearch(exp->token);
		if(node != NULL){
			if(!strcmp(node->type, "STRING") && exp->count > 0){
				char* indexType = EvaluateExp(exp->nodes[0]->nodes[0]);
				if(strcmp("INT", indexType)){
					ERROR++;
					printf("[line:%d] Size of string must be type INT not %s\n", exp->line ,indexType);
					return "NULL";
				}
			return "CHAR";
			}
			return node->type;
		}
        else{
			ERROR++;
			printf("[line:%d] Undeclared variable [%s]\n", exp->line, exp->token);
            return "undefined";
		}
	}

	else if (exp->val_type != NULL && !strcmp(exp->val_type, "NULL"))
		return "NULL";

	else if (exp->val_type != NULL)
		return exp->val_type;

	else if (!strcmp(exp->token, "FUNC_CALL")){
		symbolNode *funcSymbol;
		if(checkFunctionCall(exp->nodes[0]->token, exp->nodes[1])){
			funcSymbol = scopeSearch(exp->nodes[0]->token);
			return funcSymbol->type;
		}
	}

	else if (!strcmp(exp->token,"+")||!strcmp(exp->token,"-")||!strcmp(exp->token,"*")||!strcmp(exp->token,"/")){
		char* left, *right;
        left = EvaluateExp(exp->nodes[0]);
        right = EvaluateExp(exp->nodes[1]);
		if (!strcmp(left, "NULL") || !strcmp(right,"NULL"))
			return "NULL";
        if (!strcmp(left,"INT") && !strcmp(right,"INT"))
			return "INT";
		else if (!strcmp(left,"REAL") && !strcmp(right,"REAL"))
			return "REAL";
		else if ((!strcmp(left,"REAL") && !strcmp(right,"INT")) || (!strcmp(left,"INT") && !strcmp(right,"REAL")))
			return "REAL";
		else if (((!strcmp(left,"INT*") && !strcmp(right,"INT")) || (!strcmp(left,"INT") && !strcmp(right,"INT*"))) && strcmp(exp->token,"*") && strcmp(exp->token,"/"))
			return "INT*";
		else if (((!strcmp(left,"CHAR*") && !strcmp(right,"INT")) || (!strcmp(left,"INT") && !strcmp(right,"CHAR*"))) && strcmp(exp->token,"*") && strcmp(exp->token,"/"))
			return "CHAR*";
		else if (((!strcmp(left,"REAL*") && !strcmp(right,"INT")) || (!strcmp(left,"INT") && !strcmp(right,"REAL*"))) && strcmp(exp->token,"*") && strcmp(exp->token,"/"))
			return "REAL*";
		else {
			ERROR++;
			printf("[line:%d] Can not perform [%s] between [%s] and [%s] - [%s %s %s]\n", exp->line, exp->token, left, right,exp->nodes[0]->token, exp->token, exp->nodes[1]->token);
		}
	}

	else if(!strcmp(exp->token,">")||!strcmp(exp->token,"<")||!strcmp(exp->token,">=")||!strcmp(exp->token,"<=")){
        char* left, *right;
        left = EvaluateExp(exp->nodes[0]);
        right = EvaluateExp(exp->nodes[1]);
        if((!strcmp(left,"INT") && !strcmp(right,"INT")) || (!strcmp(left,"REAL") && !strcmp(right,"REAL")))
            return "BOOL";
		else{
			ERROR++;
			printf("[line:%d] Can not perform [%s] between [%s] and [%s] - [%s %s %s]\n", exp->line,exp->token, left, right,exp->nodes[0]->token, exp->token, exp->nodes[1]->token);
		}
	}

    else if(!strcmp(exp->token,"&&")||!strcmp(exp->token,"||")){
        char* left, *right;
        left = EvaluateExp(exp->nodes[0]);
        right = EvaluateExp(exp->nodes[1]);
        if(!strcmp(left,"BOOL") && !strcmp(right,"BOOL"))
            return "BOOL";
		else {
			ERROR++;
			printf("[line:%d] Can not perform [%s] between [%s] and [%s] - [%s %s %s]\n", exp->line, exp->token, left, right,exp->nodes[0]->token, exp->token, exp->nodes[1]->token);
		}
	}

	else if(!strcmp(exp->token,"==")||!strcmp(exp->token,"!=")){
        char* left, *right;
        left = EvaluateExp(exp->nodes[0]);
        right = EvaluateExp(exp->nodes[1]);
        if(!strcmp(left,"INT")&&!strcmp(right,"INT"))
            return "BOOL";
        else if(!strcmp(left,"BOOL")&&!strcmp(right,"BOOL"))
            return "BOOL";
        else if(!strcmp(left,"CHAR")&&!strcmp(right,"CHAR"))
            return "BOOL";  
        else if(!strcmp(left,"REAL")&&!strcmp(right,"REAL"))
            return "BOOL";
        else if(!strcmp(left,"INT*")&&!strcmp(right,"INT*"))
            return "BOOL";
		else if(!strcmp(left,"CHAR*")&&!strcmp(right,"CHAR*"))
			return "BOOL";
		else if(!strcmp(left,"REAL*")&&!strcmp(right,"REAL*"))
			return "BOOL";
		else{
			ERROR++;
			printf("[line:%d] Can not perform [%s] between [%s] and [%s] - [%s %s %s]\n", exp->line ,exp->token, left, right,exp->nodes[0]->token, exp->token, exp->nodes[1]->token);
		}
	}

	else if(!strcmp(exp->token,"NOT")){
        char* left;
        left = EvaluateExp(exp->nodes[0]);
        if(!strcmp(left,"BOOL"))
            return "BOOL";
		else{
			ERROR++;
			printf("[line:%d] Can not perform ! on [%s] - [!%s]\n", exp->line ,left,exp->nodes[0]->token);
		}
	}

	else if(!strcmp(exp->token,"PTR")){
        char* left;
        left = EvaluateExp(exp->nodes[0]->nodes[0]);
        if(!strcmp(left,"INT*"))
            return "INT";
		else if(!strcmp(left,"CHAR*"))
            return "CHAR";
		if(!strcmp(left,"REAL*"))
            return "REAL";
		else{
			ERROR++;
			printf("[line:%d] [%s] is not pointer\n", exp->nodes[0]->nodes[0]->line ,left);
		}
	}

	else if(!strcmp(exp->token,"NEGATIVE")){
        char* left;
        left = EvaluateExp(exp->nodes[0]->nodes[0]);
        if(!strcmp(left,"INT"))
            return "INT";
		else if(!strcmp(left,"REAL"))
            return "REAL";
		else if(!strcmp(left,"REAL*"))
            return "REAL*";
		else if(!strcmp(left,"INT*"))
            return "INT*";
		else{
			ERROR++;
			printf("[line:%d] can not perform (-) on [%s] \n", exp->nodes[0]->nodes[0]->line ,left);
		}
	}

	else if (!strcmp(exp->token,"LEN OF")){
		char* left;
        left = EvaluateExp(exp->nodes[0]);
		if(!strcmp(left,"STRING"))
            return "INT";
		else{
			ERROR++;
			printf("[line:%d] Can not perform || on [%s] - [|%s|]\n", exp->nodes[0]->line, left,exp->nodes[0]->token);
		}
	}

	else if (!strcmp(exp->token,"&")){
		char* left;
        left = EvaluateExp(exp->nodes[0]);
		if(!strcmp(left,"INT"))
            return "INT*";
		else if(!strcmp(left,"CHAR"))
            return "CHAR*";
		else if(!strcmp(left,"REAL"))
            return "REAL*";
		else{
			ERROR++;
			printf("[line:%d] Can not perform & on [%s] - [&%s]\n", exp->nodes[0]->line, left,exp->nodes[0]->token);
		}
	}

	else if(!strcmp(exp->token, "=")){
        	if (isDeclared(exp->nodes[0]->token)){
                char *left = scopeSearch(exp->nodes[0]->token)->type;
                char *right = EvaluateExp(exp->nodes[1]);
            	if (strcmp(right,left) && strcmp(right,"NULL")){
					ERROR++;
                    printf("[line:%d] Assignment Error mismatch: cannot assign %s to %s\n", exp->line, right, left);
				}
				else
					return left;
			}
		}
	return "NULL";
}


void isSymbolExist(scopeNode* scope){
    scopeNode * current = scope;
    while(current != NULL){
        checkSymbols(current);
        current=current->next;
    }
}


void checkSymbols(scopeNode* scope){
    symbolNode* s1 = scope->symbolTable;
	symbolNode* s2;
 	while(s1!= NULL){
        s2 = s1->next;
        while (s2 != NULL){
            if (!strcmp(s1->id, s2->id)){
                if (s1->isFunc){
					ERROR++;
                    printf ("Re-declaration of function (%s)\n", s1->id);
				}
                else{
					ERROR++;
                    printf ("Re-declaration of variable (%s)\n", s1->id);
				}
        	}
            s2 =s2->next;
        }
        s1 =s1->next;
    }
}


void printInfo(node *root){
    printf ("\nSyntax Tree:\n"); 
	printtree (root,0);
	printf("\n"); 

    printf("print symbol table:\n");
    printSymbolTable(topStack);
    printf("\n"); 
    
    printf("print scopes:\n");
    printScopes(topStack);
    printf("\n"); 
}


void printSymbolTable(scopeNode *node)
{  
   scopeNode *currentScope = node;
   symbolNode *currentSymbol;
   while(currentScope != NULL){
		currentSymbol = currentScope->symbolTable;
		while (currentSymbol != NULL) {
			printf("id:{%s}, type:{%s}, value{%s},scope{%d}", currentSymbol->id, currentSymbol->type, currentSymbol->data,currentSymbol->scopeID);
			printf("\n");
			currentSymbol = currentSymbol->next;
		}
	currentScope=currentScope->next;       
	}
}

void printScopes(scopeNode *node){
    scopeNode *current=node;
    while (current != NULL)	{
		printf("scope id:{%s} scopeNum:{%d} scopeLevel:{%d}\n", current->scopeName,current->scopeNum,current->scopeLevel);
		current = current->next;
	}
    printf("num of scopes:{%d}\n",GlobalScope);
}


///////////////////////////////////////////// part3

void addVar(node* node, char* var){
	node->var = strdup(var);
}

void addCode(node* node, char* code){
	char buffer[10000] = "";
	if (!strcmp(node->token, "MAIN")){
		sprintf(buffer, "%s", "main:\n\tBeginFunc\n");
		node->code = strdup(buffer);
	}

	if (!strcmp(node->token, "FUNCTION")){
		sprintf(buffer, "%s:\n%s", node->nodes[0]->token,"\tBeginFunc\n");
		node->code = strdup(buffer);
	}

	if (node->count > 0){
		for (int i = 0; i< node->count; i++){
			if (strcmp(node->nodes[i]->code,"")){
				sprintf(buffer + strlen(buffer), "%s", node->nodes[i]->code);
			}
		}
	}
	sprintf(buffer + strlen(buffer), "%s", code);
	node->code = strdup(buffer);

	if (!strcmp(node->token, "MAIN") || !strcmp(node->token, "FUNCTION")){
		sprintf(buffer + strlen(buffer), "\t%s", "EndFunc\n\n");
		node->code = strdup(buffer);
	}
}

void freshVar(node* node){
	char new[10];
	sprintf(new ,"t%d", var++);
	node->var = strdup(new);
}

char* freshLabel(){
	char new[10] = "";
	sprintf(new ,"L%d", label++);
	char* L = strdup(new);
	return L;
}

void print3AC(node* node){
	printf("%s", node->code);
}

void genIF(node* nodeIF){
	char buffer[10000] = "";
	if (strcmp(nodeIF->nodes[0]->code,"")){
		sprintf(buffer + strlen(buffer), "%s", nodeIF->nodes[0]->code);
	}
	char* L = freshLabel();
	sprintf(buffer + strlen(buffer), "\tifz %s Goto %s\n", nodeIF->nodes[0]->var, L);
	if (strcmp(nodeIF->nodes[1]->code,"")){
		sprintf(buffer + strlen(buffer), "%s", nodeIF->nodes[1]->code);
	}
	sprintf(buffer + strlen(buffer), "%s:", L);
	nodeIF->code = strdup(buffer);
}

void genIF_ELSE(node* nodeIF_ELSE){
	char buffer[10000] = "";
	if (strcmp(nodeIF_ELSE->nodes[0]->code,"")){
		sprintf(buffer + strlen(buffer), "%s", nodeIF_ELSE->nodes[0]->code);
	}
	char* L1 = freshLabel();
	sprintf(buffer + strlen(buffer), "\tifz %s Goto %s\n", nodeIF_ELSE->nodes[0]->var, L1);
	if (strcmp(nodeIF_ELSE->nodes[1]->code,"")){
		sprintf(buffer + strlen(buffer), "%s", nodeIF_ELSE->nodes[1]->code);
	}
	char* L2 = freshLabel();
	sprintf(buffer + strlen(buffer), "\tGoto %s\n",  L2);
	sprintf(buffer + strlen(buffer), "%s:", L1);
	if (strcmp(nodeIF_ELSE->nodes[2]->code,"")){
		sprintf(buffer + strlen(buffer), "%s", nodeIF_ELSE->nodes[2]->code);
	}
	sprintf(buffer + strlen(buffer), "%s:", L2);
	nodeIF_ELSE->code = strdup(buffer);
}

void genWHILE(node* nodeWHILE){
	char buffer[10000] = "";
	char* L1 = freshLabel();
	sprintf(buffer, "%s:", L1);
	if (strcmp(nodeWHILE->nodes[0]->code,"")){
		sprintf(buffer + strlen(buffer), "%s", nodeWHILE->nodes[0]->code);
	}
	char* L2 = freshLabel();
	sprintf(buffer + strlen(buffer), "\tifz %s Goto %s\n", nodeWHILE->nodes[0]->var, L2);
	if (strcmp(nodeWHILE->nodes[1]->code,"")){
		sprintf(buffer + strlen(buffer), "%s", nodeWHILE->nodes[1]->code);
	}
	sprintf(buffer + strlen(buffer), "\tGoto %s\n",  L1);
	sprintf(buffer + strlen(buffer), "%s:", L2);
	nodeWHILE->code = strdup(buffer);
}

void genDO_WHILE(node* nodeWHILE){
	char buffer[10000] = "";
	char* L1 = freshLabel();
	char* L2 = freshLabel();
	sprintf(buffer, "%s:", L1);
	if (strcmp(nodeWHILE->nodes[0]->code,"")){
		sprintf(buffer + strlen(buffer), "%s", nodeWHILE->nodes[0]->code);
	}
	if (strcmp(nodeWHILE->nodes[1]->code,"")){
		sprintf(buffer + strlen(buffer), "%s", nodeWHILE->nodes[1]->code);
	}
	sprintf(buffer + strlen(buffer), "\tifz %s Goto %s\n", nodeWHILE->nodes[1]->var, L2);
	sprintf(buffer + strlen(buffer), "\tGoto %s\n",  L1);
	sprintf(buffer + strlen(buffer), "%s:", L2);
	nodeWHILE->code = strdup(buffer);
}

void genFOR(node* nodeFOR){
	char buffer[10000] = "";
	char* L1 = freshLabel();
	if (strcmp(nodeFOR->nodes[0]->code,"")){
		sprintf(buffer + strlen(buffer), "%s", nodeFOR->nodes[0]->code);
		sprintf(buffer + strlen(buffer), "%s:", L1);
		sprintf(buffer + strlen(buffer), "%s", nodeFOR->nodes[1]->code);
		
	}
	char* L2 = freshLabel();
	sprintf(buffer + strlen(buffer), "\tifz %s Goto %s\n", nodeFOR->nodes[1]->var, L2);
	sprintf(buffer + strlen(buffer), "%s", nodeFOR->nodes[3]->code);
	sprintf(buffer + strlen(buffer), "%s", nodeFOR->nodes[2]->code);
	sprintf(buffer + strlen(buffer), "\tGoto %s\n",  L1);
	sprintf(buffer + strlen(buffer), "%s:", L2);
	nodeFOR->code = strdup(buffer);
}



void genFUNC_CALL(node* node_FC, int flag){
	char buffer[10000] = "";
	if (node_FC->nodes[1]->count > 0){
		for (int i = 0;i < node_FC->nodes[1]->count;i++){
			if (strcmp(node_FC->nodes[1]->nodes[i]->val_type, "ID")){
				freshVar(node_FC->nodes[1]->nodes[i]);
				sprintf(buffer + strlen(buffer), "\t%s = %s\n", node_FC->nodes[1]->nodes[i]->var, node_FC->nodes[1]->nodes[i]->token);
			}
			sprintf(buffer + strlen(buffer), "\tPushParam %s\n", node_FC->nodes[1]->nodes[i]->var);
		}
		func(node_FC->nodes[0], buffer, flag);
		node_FC->var = node_FC->nodes[0]->var;
		sprintf(buffer + strlen(buffer), "\tPopParams %d\n", calcPop(node_FC->nodes[1]));
		node_FC->code = strdup(buffer);
	}
	else {
		func(node_FC->nodes[0], buffer, flag);
		node_FC->var = node_FC->nodes[0]->var;
		node_FC->code = strdup(buffer);
	}
}



int calcPop(node* args){
	int count = 0;
	for(int i = 0; i < args->count; i++){
		if (!strcmp(args->nodes[i]->val_type, "INT") || !strcmp(args->nodes[i]->val_type, "BOOL"))
			count+=4;
		else if (!strcmp(args->nodes[i]->val_type, "INT*") || !strcmp(args->nodes[i]->val_type, "CHAR*") || !strcmp(args->nodes[i]->val_type, "REAL*") || !strcmp(args->nodes[i]->val_type, "REAL"))
			count+=8;
		else if (!strcmp(args->nodes[i]->val_type, "CHAR"))
			count+=1;
	}
	return count;
}


void func(node* node, char* buffer, int flag){
	if (!strcmp(node->val_type, "VOID")){
		sprintf(buffer + strlen(buffer), "\tLCall %s\n", node->token);
	} 
	else{
		freshVar(node);
		if (flag)
			sprintf(buffer + strlen(buffer), "\t%s = LCall %s\n", node->var, node->token);
		else
			sprintf(buffer + strlen(buffer), "\tLCall %s\n", node->token);
	}
}


void genAssignment(node* node){
	char buffer[10000] ="";
	if (node->nodes[1]->count > 0) {
		if (!strcmp(node->nodes[1]->nodes[0]->token, "INDEX")){
			freshVar(node->nodes[1]->nodes[0]);
			sprintf(buffer,"\t%s = &%s\n", node->nodes[1]->nodes[0]->var, node->nodes[1]->token);
			freshVar(node);
			sprintf(buffer + strlen(buffer),"\t%s = %s + %s\n", node->var, node->nodes[1]->nodes[0]->var, node->nodes[1]->nodes[0]->nodes[0]->var);
			sprintf(buffer + strlen(buffer),"\t%s = *%s\n", node->nodes[0]->var, node->var);
		}

		else if (!strcmp(node->nodes[1]->token, "LEN OF")){
			freshVar(node->nodes[1]);
			sprintf(buffer,"\t%s = Sizeof(%s)\n", node->nodes[1]->var, node->nodes[1]->nodes[0]->token);
			sprintf(buffer + strlen(buffer),"\t%s = %s\n", node->nodes[0]->var, node->nodes[1]->var);
		}

		else if (!strcmp(node->nodes[0]->token, "PTR") || !strcmp(node->nodes[1]->token, "PTR") || !strcmp(node->nodes[1]->token, "&")){
			genPTR(node);
		}

		else
			sprintf(buffer,"\t%s = %s\n", node->nodes[0]->var, node->nodes[1]->var);
	}
	else {
		if (!strcmp(node->nodes[1]->val_type, "ID")){
			sprintf(buffer,"\t%s = %s\n", node->nodes[0]->var, node->nodes[1]->var);
		}

		else {
			freshVar(node->nodes[1]);
			sprintf(buffer,"\t%s = %s\n", node->nodes[1]->var, node->nodes[1]->token);
			sprintf(buffer + strlen(buffer),"\t%s = %s\n", node->nodes[0]->token, node->nodes[1]->var);
		}
	}
	addCode(node, buffer);
}


void genExprssion(node* node){
	char buffer[10000] ="";
	freshVar(node);
	sprintf(buffer,"\t%s = %s %s %s\n", node->var, node->nodes[0]->var, node->token, node->nodes[1]->var);
	addCode(node, buffer);
}


void genSTRassignment(node* STRnode){
	char buffer[10000] ="";
	if (strcmp(STRnode->nodes[1]->nodes[0]->token, "INDEX")){
		if (STRnode->nodes[0]->nodes[0]->nodes[0]->count > 0)
			sprintf(buffer,"%s", STRnode->nodes[0]->nodes[0]->nodes[0]->code);
		freshVar(STRnode->nodes[0]->nodes[0]);
		sprintf(buffer + strlen(buffer),"\t%s = &%s\n", STRnode->nodes[0]->nodes[0]->var, STRnode->nodes[0]->var);
		freshVar(STRnode);
		sprintf(buffer + strlen(buffer),"\t%s = %s + %s\n", STRnode->var, STRnode->nodes[0]->nodes[0]->var, STRnode->nodes[0]->nodes[0]->nodes[0]->var);
		sprintf(buffer + strlen(buffer),"\t*%s = %s\n", STRnode->var, STRnode->nodes[1]->var);
		addCode(STRnode, buffer);
	}
	else
		STRtoSTR(STRnode);
}


void genSTRdecASS(node* STRnode){
	char buffer[10000] ="";
	if (!strcmp(STRnode->nodes[0]->token, "=")){
		if (STRnode->nodes[0]->nodes[0]->nodes[0]->nodes[0]->count > 0)
			sprintf(buffer,"%s", STRnode->nodes[0]->nodes[0]->nodes[0]->nodes[0]->code);
		freshVar(STRnode->nodes[0]->nodes[0]->nodes[0]);
		sprintf(buffer + strlen(buffer),"\t%s = &%s\n", STRnode->nodes[0]->nodes[0]->nodes[0]->var, STRnode->nodes[0]->nodes[0]->var);
		sprintf(buffer + strlen(buffer),"\t%s -> Sizeof(%s)\n", STRnode->nodes[0]->nodes[0]->nodes[0]->var, STRnode->nodes[0]->nodes[0]->nodes[0]->nodes[0]->var);
		sprintf(buffer + strlen(buffer),"\t*%s = %s\n", STRnode->nodes[0]->nodes[0]->nodes[0]->var, STRnode->nodes[0]->nodes[1]->var);
	}
	else{
		if (STRnode->nodes[0]->nodes[0]->nodes[0]->count > 0)
			sprintf(buffer,"%s", STRnode->nodes[0]->nodes[0]->nodes[0]->code);
		freshVar(STRnode->nodes[0]->nodes[0]);
		sprintf(buffer + strlen(buffer),"\t%s = &%s\n", STRnode->nodes[0]->nodes[0]->var, STRnode->nodes[0]->var);
		sprintf(buffer + strlen(buffer),"\t%s -> Sizeof(%s)\n", STRnode->nodes[0]->nodes[0]->var, STRnode->nodes[0]->nodes[0]->nodes[0]->var);
	}
	addCode(STRnode, buffer);
}


void genPTR(node* node){
	char buffer[1000] = "";
	if (node->nodes[0]->val_type!=NULL && !strcmp(node->nodes[0]->val_type, "ID") && node->nodes[1]->count > 0 && !strcmp(node->nodes[1]->token, "PTR")){
		freshVar(node->nodes[1]);
		sprintf(buffer + strlen(buffer),"\t%s = &%s\n", node->nodes[1]->var, node->nodes[1]->nodes[0]->nodes[0]->var);
		sprintf(buffer + strlen(buffer),"\t%s = *%s\n", node->nodes[0]->var, node->nodes[1]->var);
		addCode(node->nodes[0], buffer);
	}

	else if (node->nodes[1]->val_type!=NULL &&!strcmp(node->nodes[1]->val_type, "ID") && node->nodes[0]->count > 0 && !strcmp(node->nodes[0]->token, "PTR")){
		freshVar(node->nodes[0]);
		sprintf(buffer + strlen(buffer),"\t%s = &%s\n", node->nodes[0]->var, node->nodes[0]->nodes[0]->nodes[0]->var);
		sprintf(buffer + strlen(buffer),"\t*%s = %s\n", node->nodes[0]->var, node->nodes[1]->var);
		addCode(node, buffer);
	}

	else if (node->nodes[0]->val_type!=NULL && !strcmp(node->nodes[0]->val_type, "ID") && node->nodes[1]->count > 0 && !strcmp(node->nodes[1]->token, "&")){
		freshVar(node->nodes[1]);
		sprintf(buffer + strlen(buffer),"\t%s = &%s\n", node->nodes[1]->var, node->nodes[1]->nodes[0]->var);
		if (!strcmp(node->nodes[1]->nodes[0]->nodes[0]->token, "INDEX")){
			if (node->nodes[1]->nodes[0]->nodes[0]->nodes[0]->count > 0)
				sprintf(buffer + strlen(buffer),"%s", node->nodes[1]->nodes[0]->nodes[0]->nodes[0]->code);
			freshVar(node->nodes[1]->nodes[0]->nodes[0]);
			sprintf(buffer + strlen(buffer),"\t%s = %s + %s\n", node->nodes[1]->nodes[0]->nodes[0]->var, node->nodes[1]->var, node->nodes[1]->nodes[0]->nodes[0]->nodes[0]->var);
		}
		freshVar(node);
		sprintf(buffer + strlen(buffer),"\t%s = &%s\n", node->var, node->nodes[0]->var);
		sprintf(buffer + strlen(buffer),"\t%s = %s\n", node->nodes[1]->var, node->var);
		addCode(node->nodes[0], buffer);
	}

	else if (!strcmp(node->nodes[0]->token, "PTR") && !strcmp(node->nodes[1]->token, "PTR")){
		freshVar(node->nodes[1]);
		sprintf(buffer + strlen(buffer),"\t%s = &%s\n", node->nodes[1]->var, node->nodes[1]->nodes[0]->nodes[0]->var);
		freshVar(node->nodes[0]);
		sprintf(buffer + strlen(buffer),"\t%s = &%s\n", node->nodes[0]->var, node->nodes[0]->nodes[0]->nodes[0]->var);
		sprintf(buffer + strlen(buffer),"\t*%s = *%s\n", node->nodes[0]->var, node->nodes[1]->var);
		addCode(node, buffer);
	}
}


void STRtoSTR(node* STRnode){
	char buffer[10000] ="";
	node* temp = mknode("");
	if (STRnode->nodes[1]->nodes[0]->nodes[0]->count > 0)
		sprintf(buffer + strlen(buffer),"%s", STRnode->nodes[1]->nodes[0]->nodes[0]->code);
	freshVar(STRnode->nodes[1]->nodes[0]);
	sprintf(buffer + strlen(buffer),"\t%s = &%s\n", STRnode->nodes[1]->nodes[0]->var, STRnode->nodes[1]->var);
	freshVar(STRnode);
	sprintf(buffer + strlen(buffer),"\t%s = %s + %s\n", STRnode->var, STRnode->nodes[1]->nodes[0]->var, STRnode->nodes[1]->nodes[0]->nodes[0]->var);

	if (STRnode->nodes[0]->nodes[0]->nodes[0]->count > 0)
		sprintf(buffer + strlen(buffer),"%s", STRnode->nodes[0]->nodes[0]->nodes[0]->code);
	freshVar(STRnode->nodes[0]->nodes[0]);
	sprintf(buffer + strlen(buffer),"\t%s = &%s\n", STRnode->nodes[0]->nodes[0]->var, STRnode->nodes[0]->var);
	freshVar(temp);
	sprintf(buffer + strlen(buffer),"\t%s = %s + %s\n", temp->var, STRnode->nodes[0]->nodes[0]->var, STRnode->nodes[0]->nodes[0]->nodes[0]->var);

	sprintf(buffer + strlen(buffer),"\t*%s = *%s\n", temp->var ,STRnode->var);	
	addCode(STRnode, buffer);
}