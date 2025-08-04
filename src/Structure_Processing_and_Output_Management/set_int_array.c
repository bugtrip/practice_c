#include "set_int_array.h"

void set_int_array(int_array* ia, int* arr, size_t arr_size){
	size_t tmp_size = arr_size > ia->size ? ia->size : arr_size;
	for(size_t i = 0; i < tmp_size; ++i){
		ia->arr[i] = arr[i];
	}
}
