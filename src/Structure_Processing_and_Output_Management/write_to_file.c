#include "write_to_file.h"
#include <stdio.h>

int write_to_file(description* desc){
	FILE* file;
	file = fopen("description.txt", "a");
	if(file == NULL){
		return -1;
	}

	fprintf(file, "char_array: %s\n", desc->name->arr);
	fprintf(file, "int_array: ");
	
	for(size_t i = 0; i < desc->value->size; ++i){
		if(i == desc->value->size-1){
			fprintf(file, "%d.\n", desc->value->arr[i]);
			break;
		}
		fprintf(file, "%d, ", desc->value->arr[i]);
	}

	fclose(file);

	return 0;
}
