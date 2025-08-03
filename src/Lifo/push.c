#include "push.h"
#include "geometric_progression.h"
#include "top.h"

void push(Stack* st, ptr_create_node new_node, int elem, int ratio){
    if(st->head == NULL){
		Node* cur = new_node(elem, ratio, geometric_progression);
		if(cur == NULL){ return ; }
		cur->next = NULL;
		st->head = cur;
        
        st->size_st++;
    } else {
		Node* cur = top(st);
		cur->next = new_node(elem, ratio, geometric_progression);
		if(cur->next == NULL){ return ; }
		cur = cur->next;
		cur->next = NULL;

        st->size_st++;
    }
}
