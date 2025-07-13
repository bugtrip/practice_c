# Practice (C)

1. Lifo

Implement a LIFO data structure to store a geometric progression consisting of 15 elements, with a common ratio of x and an initial term n.
The program must support the following operations:
- Add a sequence of elements to the structure
- Remove a sequence of elements from the structure
- Display the current top sequence
The values of the variables x and n must not exceed 50 and 10.
__________________________________________________________

2. Game field

Write a program where a 10x10 two-dimensional game field is created, and 12 'mines' are randomly placed such that they do not touch each other (there should be no mines in the neighboring cells of a mine). The game field should be represented as a two-dimensional array, with the type char and size 10x10. Empty cells (without mines) should be assigned the value 0, while cells containing mines should be marked with the symbol `*` .
__________________________________________________________

3. Calculating the arithmetic means

Define a structure with two fields `x` and `y` of type `int`, and create a type named `POINT` for this structure.
Declare a function named `calculate_arithmetic_means` that takes two parameters:
- a one-dimensional array of `POINT` elements;
- the number of elements (of type `size_t`).

The `calculate_arithmetic_means` function should compute two arithmetic means: one for the `x` coordinates and one for the `y` coordinates. The results should be stored in a structure of type `DATA`, which contains two fields: `mean_x` and `mean_y`, both of type `double`.

In the main function declare an array points of type `POINT` with 20 elements. Read a sequence of integers from the input, written on a single line and separated by spaces. The number of coordinate pairs must not exceed 20, but it may be fewer.
Print the resulting array to the console. Then call the `calculate_arithmetic_means` function using only the valid elements of the points array (those that were filled with input data). Print the returned values (`mean_x` and `mean_y`) to the console on a single line, separated by a space, with two decimal places of precision.
__________________________________________________________

4.
