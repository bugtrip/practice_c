#include <stdio.h>
#include "description.h"
#include "set_char_array.h"
#include "set_int_array.h"
#include "alloc_desc.h"
#include "print_desc_name.h"
#include "print_desc_value.h"
#include "free_description.h"
#include "write_to_file.h"

int main(){
	char str_1[] = {"test. struct desc(char_arr, int_arr)"};
	int ar_1[] = {4,311,62,956,1334,311,62,956,1334,7854,3277,12,31,54763,32,12,65,34,12,2358,567,563,245,26,7854,3277,12,31,54763,32,12,65,34,12,2358,567,563,245,26,257,34,67,37};
	const size_t char_ar_size = sizeof(str_1)/sizeof(*str_1);
	const size_t int_ar_size = sizeof(ar_1)/sizeof(*ar_1);

	description* desc = alloc_desc(char_ar_size, int_ar_size);
	if(desc != NULL){
		set_char_array(desc->name, str_1, char_ar_size);
		set_int_array(desc->value, ar_1, int_ar_size);
		print_desc_name(desc);
		print_desc_value(desc);

		int res_write_to_file = write_to_file(desc);
		if(res_write_to_file == -1){
			printf("fopen() failed!\n");
		}

		free_description(desc);
	}
	
	return 0;
}
