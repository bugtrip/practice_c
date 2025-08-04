#include "print_char_arr.h"
#include <stdio.h>

void print_char_arr(const char_array* ca){
	if(ca != NULL){
		printf("%s\n", ca->arr);
	}
}
