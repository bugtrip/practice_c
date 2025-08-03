# Practice (C)

1. Lifo

Implement a LIFO data structure to store a geometric progression consisting of 15 elements, with a common ratio of `x` and an initial term `n`.
The program must support the following operations:
- Add a sequence of elements to the structure
- Remove a sequence of elements from the structure
- Display the current top sequence
The values of the variables `x` and `n` must not exceed 50 and 10.
__________________________________________________________

2. Calculating the arithmetic means

Define a structure with two fields `x` and `y` of type `int`, and create a type named `POINT` for this structure.
Declare a function named `calculate_arithmetic_means` that takes two parameters:
- a one-dimensional array of `POINT` elements;
- the number of elements (of type `size_t`).

The `calculate_arithmetic_means` function should compute two arithmetic means: one for the `x` coordinates and one for the `y` coordinates. The results should be stored in a structure of type `DATA`, which contains two fields: `mean_x` and `mean_y`, both of type `double`.

In the main function declare an array points of type `POINT` with 20 elements. Read a sequence of integers from the input, written on a single line and separated by spaces. The number of coordinate pairs must not exceed 20, but it may be fewer.
Print the resulting array to the console. Then call the `calculate_arithmetic_means` function using only the valid elements of the points array (those that were filled with input data). Print the returned values (`mean_x` and `mean_y`) to the console on a single line, separated by a space, with two decimal places of precision.
__________________________________________________________

3. Double array struct

Create a user-defined type (structure) in which one of the fields stores an array of type double. Implement functionality to populate this structure and display its values to the console with a precision of two decimal places.
__________________________________________________________

4. Array Processing and Output Management

Write a program that processes two arrays: one of type `char` (maximum size 2048) and another of type `int` (maximum size 256). The data should be stored in a structure called `description` (you need to decide how to store the arrays within `description`).

Your program should implement the following functionality:

- Dynamically allocate memory for the `description` structure on the heap.
- Fill the `description` structure with appropriate data.
- Print the values of the `description` structure to the standard output.
- Write the values of the `description` structure to a file.
__________________________________________________________

5. 
