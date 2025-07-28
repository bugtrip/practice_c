#include "print_struct.h"
#include <stdio.h>

void print_struct(array_container* arr){
	for(size_t i = 0; i < arr->size; ++i){
		printf("%.2lf ", arr->arr[i]);
	}
	printf("\n");
}
