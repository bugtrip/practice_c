#ifndef GEOM_PROG_
#define GEOM_PROG_

#include "stack.h"

void geometric_progression(Node* current){
    current->arr[0] = current->first_elem;
    for(int i = 1; i < MAX_SIZE_ARR; ++i){
        current->arr[i] = current->arr[i-1] * current->common_ratio;
    }
}

#endif
