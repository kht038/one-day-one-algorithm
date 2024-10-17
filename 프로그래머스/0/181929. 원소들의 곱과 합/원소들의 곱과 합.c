#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    int square = 0;
    int times = 1;
    
    for (int i = 0; i < num_list_len; i++) {
        square += num_list[i];
        times = times * num_list[i];
    }
    
    square = square * square;
    
    return (times < square) ? 1 : 0;
}