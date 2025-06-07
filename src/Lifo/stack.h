#ifndef STACK_
#define STACK__

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

void geometric_progression(Node* current);
Node* create_node(int elem, int ratio, ptr_geom_progression calc_progression);
Node* top(Stack* st);
void push(Stack* st, ptr_create_node new_node, int elem, int ratio);
void pop(Stack* st);
void print_node(Node* top);

#endif
