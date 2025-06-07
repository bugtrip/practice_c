#ifndef PRINT_NODE_
#define PRINT_NODE_

#include <stdio.h>
#include "stack.h"

void print_node(Node* top){
    printf("First element: %d\nCommon ratio: %d\n", top->first_elem, top->common_ratio);
    printf("Top: ");
    for(int i = 0; i < MAX_SIZE_ARR; ++i){
        printf("%lld ", top->arr[i]);
    }
    printf("\n");
}

/*
void print_st(Stack* st){
    Node* cur = st->head;
    int cnt = 1;
    while(cur != NULL){
        printf("%d: ", cnt);
        for(int i = 0; i < MAX_SIZE_ARR; ++i){
            printf("%lld ", cur->arr[i]);
        }
        printf("\n");
        printf("First_elem: %d\nCommon_ratio: %d\n\n", cur->first_elem, cur->common_ratio);
        ++cnt;
        cur = cur->next;
    }
    printf("size_st: %d\n", st->size_st);
}
*/

#endif
