#include "functions.h"
#include <stddef.h>
#include <ctype.h>

scopeNode* topStack = NULL;
int SCOPE_NUM = 0;

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
	newnode->count = 0;
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
	pushStat(root, 1);

	isSymbolExist(topStack);
	printInfo(root);
}

void pushStat(node* root, int level){
	if (root == NULL)
		return;
	
	if(!strcmp(root->token, "MAIN")){
        level++;
        pushScopeToStack(&topStack, "MAIN" ,NULL, root->nodes[0]->nodes, level, root->nodes[0]->count);
	}
	if (!strcmp(root->token, "IF")){
		level++;
		pushScopeToStack(&topStack, "IF" ,NULL, root->nodes[1]->nodes, level, root->nodes[1]->count);
	}

	if(!strcmp(root->token,"FUNCTION")){
        level++;
        pushScopeToStack(&topStack,"FUNCTION",root->nodes[1], root->nodes[3]->nodes, level, root->nodes[3]->count);
        //isReturnTypeMatch(tNode);
	}

	for (int i = 0; i < root->count; i++){
		pushStat(root->nodes[i], level);
	}
}

void pushScopeToStack(scopeNode** top, char* name, node* params, node** statements, int level, int stat_size){      
	scopeNode* new_scope = (scopeNode*) malloc(sizeof(scopeNode));
	new_scope->scopeName = (char*)(malloc (sizeof(name) + 1));
	strncpy(new_scope->scopeName, name, sizeof(name)+1);
	SCOPE_NUM++;
	new_scope->scopeNum=SCOPE_NUM;
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
		else if(!strcmp(statements[i]->token, "=")){
        	if (isDeclared(statements[i]->nodes[0]->token)){ // אולי לא צריך את הפונקציה הנל
                char *left = scopeSearch(statements[i]->nodes[0]->token)->type;
                char *right = EvaluateExp(statements[i]->nodes[1]);
            	if (strcmp(right,left) && strcmp(right,""))
                    printf("Assignment Error mismatch: cannot assign %s to %s\n", right, left);
			}
		}

		else if (!strcmp(statements[i]->token, "FUNC_CALL")){
			checkFunctionCall(statements[i]->nodes[0]->token, statements[i]->nodes[1]);
		}
	}
}

void pushSymbols(node* decleration){
	for(int i = 0; i<decleration->count;i++){
		pushNodesToSymtable(decleration->nodes[i]->token, decleration->nodes[i]->nodes, decleration->nodes[i]->count);
	}
}

void pushNodesToSymtable(char* type, node** vars, int size){
	for(int i = 0;i < size; i++){
		if (strcmp(vars[i]->token, "="))
			pushToTable(&topStack, vars[i]->token, type, NULL, 0, NULL);
		else
			pushToTable(&topStack, vars[i]->nodes[0]->token, type, vars[i]->nodes[1]->token, 0, NULL);
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
	else{
		printf("Undeclared variable %s\n", id);
		return 0;
	}
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
	while (current != NULL){
		res = symbolSearch(current->symbolTable, id);
		if (res != NULL)
			return res;
		current = current->next;
	}
	return NULL;
}

int checkFunctionCall(char *funcName, node *callArgs){
    symbolNode *funcSymbol = scopeSearch(funcName);
	if (funcSymbol !=NULL)
		if (checkFunctionArgs(funcSymbol->params, callArgs))
			return 1;
    printf ("no procedure was defined with arguements matching called function (%s)\n", funcName);
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

char* EvaluateExp(node* exp){
	if (exp->val_type != NULL && !strcmp(exp->val_type, "ID")){
		symbolNode* node = scopeSearch(exp->token);
		if(node != NULL)
            return node->type;
        else{
			printf("Undeclared variable [%s]\n", exp->token);
            return "NULL";
		}
	}

	else if (exp->val_type != NULL)
		return exp->val_type;

	else if (!strcmp(exp->token,"+")||!strcmp(exp->token,"-")||!strcmp(exp->token,"*")||!strcmp(exp->token,"/")){
		char* left, *right;
        left = EvaluateExp(exp->nodes[0]);
        right = EvaluateExp(exp->nodes[1]);
		if (!strcmp(left, "NULL") || !strcmp(right,"NULL"))
			return "";
        if (!strcmp(left,"INT") && !strcmp(right,"INT"))
			return "INT";
		else if (!strcmp(left,"REAL") && !strcmp(right,"REAL"))
			return "REAL";
		else if ((!strcmp(left,"REAL") && !strcmp(right,"INT")) || (!strcmp(left,"INT") && !strcmp(right,"REAL")))
			return "REAL";
		else {
			printf("Can not perform [%s] between [%s] and [%s]\n", exp->token, left, right);
		}
	}
	return "";
}

int isSymbolExist(scopeNode* scope){
    scopeNode * current = scope;
    while(current != NULL){
        checkSymbols(current);
        current=current->next;
    }
    return 1;
}

int checkSymbols(scopeNode* scope)
{
    symbolNode* s1 = scope->symbolTable;
    symbolNode* s2;
  while(s1!= NULL){
        s2 = s1->next;
        while (s2 != NULL)
        {
            if (!strcmp(s1->id, s2->id)){
                if (s1->isFunc)
                    printf ("scope [%s] level[%d]: re-declaration of function (%s)\n", scope->scopeName, scope->scopeLevel, s1->id);
                else
                    printf ("scope [%s] level[%d]: re-declaration of variable (%s)\n", scope->scopeName, scope->scopeLevel, s1->id);
                return 0;
                }
            s2 =s2->next;
        }
        s1 =s1->next;
    }
    return 1;
}

void printInfo(node *root){
    printf ("Syntax Tree:\n"); 
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
    printf("num of scopes:{%d}\n",SCOPE_NUM);
}
