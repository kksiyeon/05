#include <stdio.h>

int main(void) {
    int number;
    printf("정수를 입력하시요: ");
    scanf("%d", &number);

    if (number>0) {
        printf("양수입니다.");}
    else if(number==0) {
        printf("0입니다.");}
    else {
        printf("음수입니다.");}

    }




