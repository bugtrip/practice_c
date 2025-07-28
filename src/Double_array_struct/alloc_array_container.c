#include "alloc_array_container.h"
#include <stdlib.h>

array_container* alloc_array_container(size_t capacity){
	if(capacity == 0){ return NULL; }
	array_container* tmp = (array_container*)malloc(sizeof(array_container));
	if(tmp == NULL){ return NULL; }
	tmp->capacity = capacity;
	tmp->arr = (double*)malloc(sizeof(double[tmp->capacity]));
	if(tmp->arr == NULL){
		free(tmp);
		return NULL;
	}

	return tmp;
}
