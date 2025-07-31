#include "print_int_arr.h"
#include <stdio.h>

void print_int_arr(const int_array* ia){
	if(ia != NULL){
		for(size_t i = 0; i < ia->size; ++i){
			printf("%d ", ia->arr[i]);
		}
		printf("\n");
	}
}
