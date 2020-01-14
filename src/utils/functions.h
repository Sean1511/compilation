#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct node {
	char* token;
	int count;
	struct node** nodes;
	char* val_type;
	int line;
	char* father;
	char* var;
	char* code;
} node;

typedef struct symbolNode{
    int isFunc; 
	char* id;
	char* type;
	char* data;
	int scopeID;
	struct node *params;
	struct symbolNode *next;
} symbolNode;

typedef struct scopeNode{
	char* scopeName;
	int scopeNum;
	int scopeLevel;
	symbolNode *symbolTable;
	struct scopeNode *next;
} scopeNode;


//part1
node* mknode(char* token);
void addNode(node** father, node* son);
void printtree(node* tree, int tab);
void mknodelist(node* father, node* son);
node* integrate(char* token, node* one, node* two);
void addlist(node* root, node* arr);

//part2
void semanticAnalysis(node* root);
void pushStat(node* root, int level);
void pushScopeToStack(scopeNode** topStack, char* name, node* params, node** statments, int level, int stat_size);
void pushScopeStatements(node** statements, int size);
void pushSymbols(node* decleration);
void pushNodesToSymtable(char* type, node** vars, int size);
void pushToTable(scopeNode** top, char* id, char* type, char* data, int isFunc, node* params);
int isDeclared(char* id);
symbolNode* symbolSearch (symbolNode* symTable, char* id);
symbolNode* scopeSearch(char* id);
char* EvaluateExp(node* exp);
int checkFuncReturn(node *funcNode);
int evalReturn(node* funcNode, char* type);
void evalPtr(node* ptrNode);
void isSymbolExist(scopeNode* scope);
void checkSymbols(scopeNode* scope);
int checkFunctionCall(char *funcName, node *args);
int checkFunctionArgs(node* params, node* callArgs);
void checkString(node* strNode, char* assType);
void printScopes(struct scopeNode *node);
void printSymbolTable(struct scopeNode *node);
void printInfo(node *root);

// part3
void addVar(node* node, char* var);
void addCode(node* node, char* code);
void freshVar(node* node);
void print3AC(node* node);
char* freshLabel();
void genIF(node* nodeIF);
void genIF_ELSE(node* nodeIF_ELSE);
void genWHILE(node* nodeWHILE);
void genDO_WHILE(node* nodeWHILE);
void genFOR(node* nodeWHILE);
void genFUNC_CALL(node* node_FC, int flag);
int calcPop(node* args);
void func(node* node, char* buffer, int flag);
void genAssignment(node* node);
#endif 