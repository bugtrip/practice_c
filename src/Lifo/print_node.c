#include "print_node.h"
#include <stdio.h>

void print_node(Node* top){
    printf("First element: %d\nCommon ratio: %d\n", top->first_elem, top->common_ratio);
    printf("Top: ");
    for(int i = 0; i < MAX_SIZE_ARR; ++i){
        printf("%lld ", top->arr[i]);
    }
    printf("\n");
}
