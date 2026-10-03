#include <stdio.h>

int main(void) {
    int number=0;
    char c;

    printf("input a string: ");

while ((c=getchar()) != '\n') {
    if (c>='0' && c<='9') {
        number++;
    }
}
printf("The number of digits is %d\n", number);
return 0;
}
