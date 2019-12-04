#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct node{
    char *token;
    struct node *left;
    struct node *middle_l;
    struct node *middle_r;
    struct node *right;
} node;

node *mknode (char *token, node *left, node *middle_l, node *middle_r, node *right);
void printtree (node *tree, int tab); 

#endif 