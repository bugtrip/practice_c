#ifndef	_CHAR_ARRAY_
#define	_CHAR_ARRAY_

#define	MAX_LENGTH	2048

#include <stddef.h>

typedef struct {
	char* arr;
	size_t size;
}char_array;

#endif
