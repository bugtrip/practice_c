#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE    10
#define MINES   12

void set_mines(char** field, char ch){
    int rows = 0;
    int cols = 0;
    int cnt = 0;
    int min = 1;
    int max = 8;
    srand(time(NULL));
    while(cnt < MINES){
        rows = rand() % (max - min + 1) + min;
        cols = rand() % (max - min + 1) + min;
        if(field[rows][cols] != ch && 
        (field[rows][cols+1] != ch && field[rows][cols-1] != ch) && 
        (field[rows+1][cols] != ch && field[rows-1][cols] != ch) && 
        (field[rows+1][cols-1] != ch && field[rows+1][cols+1] != ch) && 
        (field[rows-1][cols-1] != ch && field[rows-1][cols+1] != ch)){
            field[rows][cols] = ch;
            cnt++;
        }
    }
}

void print_field(char** field){
    for(size_t i = 0; i < SIZE; ++i){
        for(size_t j = 0; j < SIZE; ++j){
            printf("%c ", field[i][j]);
            if(j == 9){ printf("\n"); }
        }
    }
}

int main(){
    char** field = malloc(sizeof(char*) * SIZE);
    for(size_t i = 0; i < SIZE; ++i){
        field[i] = malloc(sizeof(char) * SIZE);
    }
        
    for(size_t i = 0; i < SIZE; ++i){
        for(size_t j = 0; j < SIZE; ++j){
            field[i][j] = '0'; 
        }
    }
    char ch = '*';
    set_mines(field, ch);

    print_field(field);

    for(size_t i = 0; i < SIZE; ++i){
        free(field[i]);
    }
    free(field);

    return 0;
}
