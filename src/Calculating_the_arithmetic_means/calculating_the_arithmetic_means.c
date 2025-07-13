#include <stdio.h>

typedef struct Point{
    int x;
    int y;
}Point;

typedef struct Data{
    double mean_x;
    double mean_y;
}Data;

Data calculate_arithmetic_means(Point* array, size_t count){
    double x = 0;
    double y = 0;
    
    if(count == 0){ return (Data){0.0, 0.0}; }

    for(size_t i = 0; i < count; ++i){
        x += array[i].x;
        y += array[i].y;
    }
    Data result = {.mean_x = x/count, .mean_y = y/count};
    
    return result;
}

void print_array(Point* arr, size_t count, size_t arr_size){
    size_t cnt = count > arr_size ? arr_size : count;   
    for(size_t i = 0; i < cnt; ++i){
        printf("%d %d\n", arr[i].x, arr[i].y);
    }
    
}

int main(){
    Point points[20] = {};
    size_t pts_size = sizeof(points)/sizeof(*points);
    size_t cnt = 0;
    
    while(cnt < pts_size && scanf("%d %d", &points[cnt].x, &points[cnt].y) == 2){
        ++cnt;
    }

    print_array(points, cnt, pts_size);
    Data data = calculate_arithmetic_means(points, cnt);
    
    printf("%.2lf %.2lf\n", data.mean_x, data.mean_y);

    return 0;
}
