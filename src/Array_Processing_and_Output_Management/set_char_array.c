#include "set_char_array.h"
#include <string.h>

void set_char_array(char_array* ca, char* arr, size_t arr_size){
	size_t tmp_size = arr_size > ca->size ? ca->size : arr_size;
	memcpy(ca->arr, arr, tmp_size);
}
