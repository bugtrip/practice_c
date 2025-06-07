#ifndef MAIN_
#define MAIN_

#include <stdio.h>
#include "stack.h"

int main(){
    Stack st = {NULL, 0};

    push(&st, create_node, 1, 2);
    push(&st, create_node, 4, 8);
    push(&st, create_node, 1, 3);
    push(&st, create_node, 0, 0);
    push(&st, create_node, 8, 9);
    push(&st, create_node, 51, 11);
    push(&st, create_node, 2, 3);
    push(&st, create_node, 2, 4);
    push(&st, create_node, 47, 7);

    Node* top_node = NULL;

    while(st.head != NULL){
        top_node = top(&st);
        print_node(top_node);
        printf("Size stack: %d\n\n", st.size_st);
        pop(&st);
    }

    if(st.head == NULL){
        printf("Size stack: %d\nStack is empty!\n", st.size_st);
    }

    return 0;
}

#endif
