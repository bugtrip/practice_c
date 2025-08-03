#include "create_node.h"

Node* create_node(int elem, int ratio, ptr_geom_progression calc_progression){
    Node* cur = (Node*)malloc(sizeof(Node));
    if(cur == NULL){ return NULL; }
	cur->first_elem = elem < MAX_FIRST_ELEM ? elem : MAX_FIRST_ELEM;
    cur->common_ratio = ratio < MAX_COMMON_RATIO ? ratio : MAX_COMMON_RATIO;
    calc_progression(cur);
    
    return cur;
}
