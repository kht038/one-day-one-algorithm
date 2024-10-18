#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    
    a % 2 == 0 ? printf("%d is even", a) : printf("%d is odd", a);

    return 0;
}