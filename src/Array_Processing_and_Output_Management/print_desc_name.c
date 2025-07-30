#include "print_desc_name.h"
#include <stdio.h>

void print_desc_name(description* desc){
	printf("%s\n", desc->name->arr);
}
