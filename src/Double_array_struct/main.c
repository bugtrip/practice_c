#include <stdio.h>
#include "container.h"
#include "set_val_array.h"
#include "print_struct.h"
#include "free_struct.h"
#include "alloc_array_container.h"
/*
void print_test(double* ar, size_t size, int test_num){
	printf("test_%d: ", test_num);
	for(size_t i = 0; i < size; ++i){
		printf("%.2lf ", ar[i]);
	}
	printf("\ntest_%d_size: %ld\n", test_num, size);
}
*/
int main(){
	const size_t container_size = 10;
	array_container* container_1 = alloc_array_container(container_size);
	
	double test_1[] = {423.99, 783.41, 42.90, 82.45, 121.81, 12.44, 99.77, 4.03, 639.85, 987.55, 100.01};
	size_t test_1_size = sizeof(test_1)/sizeof(*test_1);	// > container_size
	//print_test(test_1, test_1_size, 1);
	set_val_array(container_1, test_1, test_1_size);
	print_struct(container_1);
	printf("container_1->capacity: %ld\ncontainer_1->size: %ld\n\n", container_1->capacity, container_1->size);

	array_container* container_2 = alloc_array_container(container_size);
	double test_2[] = {89.23, 732.1, 44.2, 65.2, 421.5, 876.99, 89.00, 77.23, 58.91, 32.99};
	size_t test_2_size = sizeof(test_2)/sizeof(*test_2);	// == container_size
	//print_test(test_2, test_2_size, 2);
	set_val_array(container_2, test_2, test_2_size);
	print_struct(container_2);
	printf("container_2->capacity: %ld\ncontainer_2->size: %ld\n\n", container_2->capacity, container_2->size);

	array_container* container_3 = alloc_array_container(container_size);
	double test_3[] = {};
	size_t test_3_size = sizeof(test_3)/sizeof(*test_3);	// 0
	//print_test(test_3, test_3_size, 3);
	set_val_array(container_3, test_3, test_3_size);
	print_struct(container_3);
	printf("container_3->capacity: %ld\ncontainer_3->size: %ld\n\n", container_3->capacity, container_3->size);

	array_container* container_4 = alloc_array_container(container_size);
	double test_4[] = {72.1, 44.2, 65.2, 421.5, 876.99, 89.00, 77.23, 58.91, 32.99};
	size_t test_4_size = sizeof(test_4)/sizeof(*test_4);	// < container_size
	//print_test(test_4, test_4_size, 4);
	set_val_array(container_4, test_4, test_4_size);
	print_struct(container_4);
	printf("container_4->capacity: %ld\ncontainer_4->size: %ld\n", container_4->capacity, container_4->size);
	
	free_struct(container_1);
	free_struct(container_2);
	free_struct(container_3);
	free_struct(container_4);

	return 0;
}
