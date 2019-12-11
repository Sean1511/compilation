#include "functions.h"
#include <stddef.h>

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

node* combine(char* token, node* one, node* two) {
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



