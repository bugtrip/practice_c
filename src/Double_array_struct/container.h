#ifndef	_CONTAINER_
#define	_CONTAINER_

#include <stddef.h>

typedef struct array{
	double* arr;
	size_t capacity;
	size_t size;
} array_container;


#endif
