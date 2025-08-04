#include "free_description.h"
#include "free_char_array.h"
#include "free_int_array.h"

void free_description(description* desc){
	free_char_array(desc->name);
	free_int_array(desc->value);
	free(desc);
}
