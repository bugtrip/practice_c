#include "top.h"
//#include "stack.h"

Node* top(Stack* st){
    Node* cur = st->head;
    if(st->head != NULL){
        while(cur && cur->next != NULL){
            cur = cur->next;
        }
    }
    return cur;
}
