#include "alloc_desc.h"
#include "alloc_char_arr.h"
#include "alloc_int_arr.h"

description* alloc_desc(size_t char_arr_size, size_t int_arr_size){
	if(int_arr_size == 0 || char_arr_size == 0){ return NULL; }
	description* tmp = (description*)malloc(sizeof(description));
	if(tmp == NULL){ return NULL; }

	tmp->name = alloc_char_arr(char_arr_size);
	if(tmp->name == NULL){ 
		free(tmp);
		return NULL; 
	}

	tmp->value = alloc_int_arr(int_arr_size);
	if(tmp->value == NULL){ 
		free_char_array(tmp->name);
		free(tmp);
		return NULL; 
	}

	return tmp;
}
