#include "set_char_array.h"
#include <string.h>

void set_char_array(char_array* ca, char* arr, size_t arr_size){
	if(ca == NULL || arr == NULL){ return ; }
	size_t tmp_size = arr_size > ca->size ? ca->size : arr_size;
	strncpy(ca->arr, arr, tmp_size);
	if(ca->arr[tmp_size-1] != '\0'){ ca->arr[tmp_size-1] = '\0'; }
}
