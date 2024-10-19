#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// str_list_len은 배열 str_list의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* str_list[], size_t str_list_len, const char* ex) {
    int total_length = 0;
    
    for (int i = 0; i < str_list_len; i++) {
        if (strstr(str_list[i], ex) == NULL) { // ex가 포함되어 있지 않은 경우
            total_length += strlen(str_list[i]); // 길이 추가
        }
    }
    
    char* answer = (char*)malloc((total_length + 1) * sizeof(char));
    answer[0] = '\0';
    
    for(int i = 0; i < str_list_len; i++) {        
        if (strstr(str_list[i], ex) == NULL) {
            strcat(answer, str_list[i]);
        }
    }
            
    return answer;
}

// char* solution(const char* str_list[], size_t str_list_len, const char* ex) {
//     // 문자열의 최대 길이를 계산
//     int total_length = 0;
    
//     // ex가 포함되지 않은 문자열의 길이 계산
//     for (int i = 0; i < str_list_len; i++) {
//         if (strstr(str_list[i], ex) == NULL) { // ex가 포함되어 있지 않은 경우
//             total_length += strlen(str_list[i]); // 길이 추가
//         }
//     }

//     // 필요한 만큼 메모리 할당 (+1은 널 종료 문자)
//     char* answer = (char*)malloc(total_length + 1);
//     if (answer == NULL) {
//         return NULL; // 메모리 할당 실패 시 NULL 반환
//     }

//     answer[0] = '\0'; // 빈 문자열로 초기화

//     // 문자열 결합
//     for (size_t i = 0; i < str_list_len; i++) {
//         if (strstr(str_list[i], ex) == NULL) { // ex가 포함되지 않은 경우
//             strcat(answer, str_list[i]); // 문자열 결합
//         }
//     }

//     return answer; // 결과 반환
// }