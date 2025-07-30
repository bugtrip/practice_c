#include "free_char_array.h"

void free_char_array(char_array* ca){
	free(ca->arr);
	free(ca);
}
