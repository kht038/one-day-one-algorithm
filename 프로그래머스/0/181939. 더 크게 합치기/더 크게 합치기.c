#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(int a, int b) {
    char char_a[12]; 
    char char_b[6];
    
    int a_plus_b = 0;
    int b_plus_a = 0;
    
    sprintf(char_a, "%d", a);  // 'a'를 문자열로 변환
    sprintf(char_b, "%d", b);  // 'b'를 문자열로 변환
    
    // 연결을 위해 동적 메모리 할당
    char* concat_a_b = (char*)malloc(strlen(char_a) + strlen(char_b) + 1);
    char* concat_b_a = (char*)malloc(strlen(char_a) + strlen(char_b) + 1);
    
    if (concat_a_b == NULL || concat_b_a == NULL) {
        printf("Memory allocation failed\n");
        return -1; // 메모리 할당 실패 시 종료
    }
    
    // 문자열을 연결
    strcpy(concat_a_b, char_a);
    strcat(concat_a_b, char_b);
    
    strcpy(concat_b_a, char_b);
    strcat(concat_b_a, char_a);
    
    // 연결된 문자열을 정수로 변환
    a_plus_b = atoi(concat_a_b);
    b_plus_a = atoi(concat_b_a);
    
    // 동적 메모리 해제
    free(concat_a_b);
    free(concat_b_a);
    
    // 더 큰 값을 반환
    return (a_plus_b > b_plus_a) ? a_plus_b : b_plus_a;
}
