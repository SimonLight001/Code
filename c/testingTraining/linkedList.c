#include <stdio.h>
#include <stdlib.h>
#define square(x) ((x)*(x))

typedef struct node{
    int val;
    struct node * next;
}node_t;

void print_list(node_t * head) {
    node_t * current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

/*void push(node_t * head, int val) {
    node_t * current = head;
    while (current->next != NULL) {
        current = current->next;
        printf("debug ");
        
    }//gets to end of list
    current->next = malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}*/

void push(node_t * head, int val){
    node_t * newLast = NULL;
    newLast = malloc(sizeof(node_t));
    node_t * current = head;
    while (current->next != NULL) {
        current = current->next;
        
    }//gets to end of list
    
    current->next = newLast;
    current->next->val = val;
    current->next->next = NULL;
}

int main(){
    node_t * head = NULL;
    node_t * current = NULL;
    head = malloc(sizeof(node_t));
    if(head == NULL){
        return 1;
    }
    head->val = 0;
    head->next = NULL;

    
    
    
    for(int i = 1; i < 11; i++){
        push(head, square(i));
    }
    
    print_list(head);
    return 0;
}