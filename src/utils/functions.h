#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct node {
	char* token;
	int count;
	struct node** nodes;
} node;

node* mknode(char* token);
void addNode(node** father, node* son);
void printtree(node* tree, int tab);
void mknodelist(node* father, node* son);
void addsubtree(node* father, node* son);
#endif 