#include "alloc_char_arr.h"

char_array* alloc_char_arr(size_t char_arr_size){
	if(char_arr_size == 0){ return NULL; }
	char_array* tmp = (char_array*)malloc(sizeof(char_array));
	if(tmp == NULL){ return NULL; }
	tmp->size = char_arr_size > MAX_LENGTH ? MAX_LENGTH : char_arr_size;
	tmp->arr = (char*)malloc(sizeof(char[tmp->size]));
	if(tmp->arr == NULL){
		free(tmp);
		return NULL;
	}

	return tmp;
}
