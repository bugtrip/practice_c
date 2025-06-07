cmake_minimum_required(VERSION 3.22)

project(lifo)

add_executable(lifo src/Lifo/stack.h src/Lifo/create_node.c src/Lifo/push.c src/Lifo/pop.c src/Lifo/geometric_progression.c 
                                                            src/Lifo/top.c src/Lifo/main.c src/Lifo/print_node.c)
