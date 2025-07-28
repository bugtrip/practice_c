#include "free_struct.h"
#include <stdlib.h>

void free_struct(array_container* container){
	free(container->arr);
	free(container);
}
