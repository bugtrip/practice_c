#ifndef	_INT_ARRAY_
#define	_INT_ARRAY_

#define	MAX_SIZE	256

#include <stddef.h>

typedef struct {
	int* arr;
	size_t size;
}int_array;

#endif
