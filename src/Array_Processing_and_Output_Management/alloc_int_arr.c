#include "alloc_int_arr.h"

int_array* alloc_int_arr(size_t int_arr_size){
	if(int_arr_size == 0){ return NULL; }
	int_array* tmp = (int_array*)malloc(sizeof(int_array));
	if(tmp == NULL){ return NULL; }
	tmp->size = int_arr_size > MAX_SIZE ? MAX_SIZE : int_arr_size;
	tmp->arr = (int*)malloc(sizeof(int[tmp->size]));
	if(tmp->arr == NULL){ return NULL; }

	return tmp;
}
