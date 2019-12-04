#include "functions.h"

void printtree (node *tree, int tab){
    int i; 
    char* token = tree->token;
   
    if (*token){
         for (i = 0; i< tab; i++){
            printf ("\t");
        }
        printf ("(%s\n", token);
    }
    else
        tab -= 1;
    if (tree -> left){
        printtree (tree-> left, tab + 1);
    }
          
    if (tree -> right){
        printtree (tree-> right, tab + 1); 
    }
    for (i = 0; i< tab; i++){
        printf ("\t");
    }
    if (*token)
        printf(")\n");
}

node *mknode (char *token, node *left, node *middle_l, node *middle_r, node *right){
    node *newnode = (node*)malloc (sizeof(node));
    char *newstr = (char*)malloc (sizeof(token)+1);
    strcpy (newstr, token);
    newnode->left = left;
    newnode->right = right;
    newnode->middle_l = middle_l;
    newnode->middle_r = middle_r;
    newnode->token = newstr;
    return newnode;
}