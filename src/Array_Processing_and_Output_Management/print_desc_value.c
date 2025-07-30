#include "print_desc_value.h"
#include <stdio.h>

void print_desc_value(description* desc){
	for(size_t i = 0; i < desc->value->size; ++i){
		printf("%d ", desc->value->arr[i]);
	}
	printf("\n");
}
