#ifndef CREATE_NODE_
#define CREATE_NODE_

#include "stack.h"

Node* create_node(int elem, int ratio, ptr_geom_progression calc_progression){
    Node* cur = malloc(sizeof(Node));
    cur->first_elem = elem < MAX_FIRST_ELEM ? elem : MAX_FIRST_ELEM;
    cur->common_ratio = ratio < MAX_FIRST_ELEM ? ratio : MAX_COMMON_RATIO;
    calc_progression(cur);
    
    return cur;
}

#endif
