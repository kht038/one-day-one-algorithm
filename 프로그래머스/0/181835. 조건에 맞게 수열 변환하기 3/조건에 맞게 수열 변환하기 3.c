#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(arr_len * sizeof(int));
    
    for(int i = 0; i < arr_len; i++) {
        if (k % 2 == 0) {
            answer[i] = arr[i] + k;
        } else {
            answer[i] = arr[i] * k;
        }
    }
        
    return answer;
}