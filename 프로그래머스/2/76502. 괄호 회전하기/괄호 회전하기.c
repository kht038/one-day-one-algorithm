#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// 회전된 문자열 생성
void rotate(char* dest, const char* src, int len, int offset) {
    for (int i = 0; i < len; i++) {
        dest[i] = src[(i + offset) % len];
    }
    dest[len] = '\0';
}

// 올바른 괄호 문자열인지 확인 (스택 방식)
bool is_valid(const char* str) {
    char stack[1000];
    int top = -1;

    for (int i = 0; str[i]; i++) {
        char c = str[i];
        if (c == '(' || c == '[' || c == '{') {
            stack[++top] = c;
        } else {
            if (top < 0) return false;
            char open = stack[top--];
            if ((c == ')' && open != '(') ||
                (c == ']' && open != '[') ||
                (c == '}' && open != '{')) {
                return false;
            }
        }
    }

    return top == -1;
}

// 회전하며 유효한 괄호 문자열 개수 세기
int solution(const char* s) {
    int len = strlen(s);
    int count = 0;
    char rotated[1001];

    for (int i = 0; i < len; i++) {
        rotate(rotated, s, len, i);
        if (is_valid(rotated)) count++;
    }

    return count;
}
