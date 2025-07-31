CC = gcc
CFLAGS = -Wall -g -std=c99
OBJ = alloc_char_arr.o alloc_int_arr.o alloc_desc.o free_char_array.o free_int_array.o free_description.o print_char_arr.o print_int_arr.o print_description.o set_char_array.o set_int_array.o write_to_file.o
%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@
main: main.c $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@
run:
	./main
clean:
	rm -f *.o main description.txt
