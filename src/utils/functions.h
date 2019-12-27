#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct node {
	char* token;
	int count;
	struct node** nodes;
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

node* mknode(char* token);
void addNode(node** father, node* son);
void printtree(node* tree, int tab);
void mknodelist(node* father, node* son);
node* integrate(char* token, node* one, node* two);
void addlist(node* root, node* arr);

void semanticAnalysis(node* root);

void pushStat(node* root, int level);
void pushScopeToStack(scopeNode** topStack, char* name, node* params, node** statments, int level, int size);
void pushScopeStatements(node** statements, int size);
void pushSymbols(node* decleration);
void pushNodesToSymtable(char* type, node** vars, int size);
void pushToTable(scopeNode** top, char* id, char* type, char* data, int isFunc, node* params);

int isDeclared(char* id);
int isNumeric(char* exp);
symbolNode* symbolSearch (symbolNode* symTable, char* id);
symbolNode* scopeSearch(char* id);
char* EvaluateExp(node* exp);

void printScopes(struct scopeNode *node);
void printSymbolTable(struct scopeNode *node);
void printInfo(node *root);

#endif 