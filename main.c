#include <stdio.h>

int main(void) {
    int num_1;
    int num_2;
    char operator;

    printf("Enter the calculation: ");
    scanf("%d %c %d", &num_1, &operator, &num_2);

    switch (operator) {
        case '+':
        printf("%d + %d = %d\n", num_1, num_2, num_1 + num_2);
        break;
        case '-':
        printf("%d - %d = %d\n", num_1, num_2, num_1 - num_2);
        break;
        case '*':
        printf("%d * %d = %d\n", num_1, num_2, num_1 * num_2);
        break;
        case '/':
        if (num_2 !=0)
        printf("%d / %d = %d\n", num_1, num_2, num_1/num_2);
        else
        printf("Error: Division by zero is not allowed.\n");
        break;

    }
}


