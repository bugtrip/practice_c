#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE    10
#define MINES   12

void set_mines(char** board, char ch){
    int rows = 0;
    int cols = 0;
    int cnt = 0;
    int min = 1;
    int max = 8;
    srand(time(NULL));
    while(cnt < MINES){
        rows = rand() % (max - min + 1) + min;
        cols = rand() % (max - min + 1) + min;
        if(board[rows][cols] != ch && 
        (board[rows][cols+1] != ch && board[rows][cols-1] != ch) && 
        (board[rows+1][cols] != ch && board[rows-1][cols] != ch) && 
        (board[rows+1][cols-1] != ch && board[rows+1][cols+1] != ch) && 
        (board[rows-1][cols-1] != ch && board[rows-1][cols+1] != ch)){
            board[rows][cols] = ch;
            cnt++;
        }
    }
}

void print_board(char** board){
    for(size_t i = 0; i < SIZE; ++i){
        for(size_t j = 0; j < SIZE; ++j){
            printf("%c ", board[i][j]);
            if(j == 9){ printf("\n"); }
        }
    }
}

int main(){
    char** board = malloc(sizeof(char*) * SIZE);
    for(size_t i = 0; i < SIZE; ++i){
        board[i] = malloc(sizeof(char) * SIZE);
    }
        
    for(size_t i = 0; i < SIZE; ++i){
        for(size_t j = 0; j < SIZE; ++j){
            board[i][j] = '0'; 
        }
    }
    char ch = '*';
    set_mines(board, ch);

    print_board(board);

    for(size_t i = 0; i < SIZE; ++i){
        free(board[i]);
    }
    free(board);

    return 0;
}
