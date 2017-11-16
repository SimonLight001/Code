#include <stdio.h>
#include <stdlib.h>

typedef struct nodeTemplate{
    int val;
    struct nodeTemplate * up;
    struct nodeTemplate * left;
    struct nodeTemplate * right;
} node;

node * navUp(node * current){
    return current->up;
}

node * navLeft(node * current){
    return current->left;
}

node * navRight(node * current){
    return current->right;
}

void makeLeft(node * current, int val){
    current->left = malloc(sizeof(node));
    current = navLeft(current);
    current->val = val;
    current->right = NULL;
    current->left = NULL;
    current->up = navUp(current);
}

void makeRight(node * current, int val){
    
    
}


int main(){
    node * root = NULL;
    node * current = NULL;
    node * current_left = NULL;
    node * current_right = NULL;
    root = malloc(sizeof(node));
    
    root->val = 0;
    root->up = NULL;
    root->left = NULL;
    root->right = NULL;
    
    current = root;
    
    makeLeft(current, 1);
    printf("%d \n%d", root->val, navLeft(root)->val);
    
    return 0;
}