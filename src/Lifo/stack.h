#ifndef STACK_
#define STACK_

#include <stdlib.h>

#define MAX_SIZE_ARR        15
#define MAX_FIRST_ELEM      50
#define MAX_COMMON_RATIO    10

typedef struct node_st{
    struct node_st* next;
    long long arr[MAX_SIZE_ARR];
    int first_elem;
    int common_ratio;
} Node;

typedef struct stack_arr {
    Node* head;
    int size_st;
} Stack;

typedef void (*ptr_geom_progression)(Node*);
typedef Node* (*ptr_create_node)(int, int, ptr_geom_progression);

#endif
