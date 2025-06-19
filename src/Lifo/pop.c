#include "pop.h"
#include "stack.h"

void pop(Stack* st){
    if(st == NULL){ return ; }
    if(st->head->next == NULL){
        free(st->head);
        st->head = NULL;
        --st->size_st;

        return ;
    }

    Node* prev = st->head;
    for(int i = 1; i < st->size_st-1; ++i){
        prev = prev->next;
    }
    Node* cur = prev->next;
    free(cur);
    prev->next = NULL;

    --st->size_st;
}

