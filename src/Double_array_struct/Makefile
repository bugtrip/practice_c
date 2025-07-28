CC = gcc
CFLAGS = -Wall -g -std=c99
OBJ = alloc_array_container.o free_struct.o set_val_array.o print_struct.o
%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@
main: main.c container.h $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@
run:
	./main
clean:
	rm -f *.o
