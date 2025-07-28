#include "set_val_array.h"

void set_val_array(array_container* array, double* val, size_t size_val){
	if(array == NULL){ return ; }
	array->size = array->capacity > size_val ? size_val : array->capacity;
	for(size_t i = 0; i < array->size; ++i){
		array->arr[i] = val[i];
	}
}
