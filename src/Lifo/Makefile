СС = gcc
CFLAGS = -Wall -g -std=c99
OBJ = create_node.o geometric_progression.o pop.o push.o top.o print_node.o
%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@
main: main.c $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@
run:
	./main
clean:
	rm -f *.o
