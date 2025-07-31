#include "print_description.h"
#include "print_char_arr.h"
#include "print_int_arr.h"
#include <stdio.h>

void print_description(const description* desc){
	if(desc != NULL){
		print_char_arr(desc->name);
		print_int_arr(desc->value);
	}
}
