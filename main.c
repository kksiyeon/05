#include <stdio.h>

int main(void) {
    int number;
    printf("정수 하나를 입력하시오.");
    scanf("%d", &number);

    if (number>=0) {
        printf("절댓값은 %d입니다.\n", number);
    }
    else {
        printf("절댓값은 %d입니다.\n", -number);
    }
    return 0;
}
