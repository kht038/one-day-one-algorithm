#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* string_concat (char* a, char* b) {
    char* start = a;
    
    while(*a != '\0') {
        a++;
    }
    while(*b != '\0') {
        *a++ = *b++;
    }
    
    *a= '\0';
    
    return start;
}

int solution (int a, int b) {
    int times = 2 * a * b;
    
    char char_a[12];
    char char_b[6];
    
    sprintf(char_a, "%d", a);
    sprintf(char_b, "%d", b);
    
    int concat_result = atoi(string_concat(char_a, char_b));
    
    return (times > concat_result) ? times : concat_result;
}