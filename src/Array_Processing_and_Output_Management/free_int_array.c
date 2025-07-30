#include "free_int_array.h"

void free_int_array(int_array* ia){
	free(ia->arr);
	free(ia);
}
