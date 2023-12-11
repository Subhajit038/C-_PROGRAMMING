//Write a program in c  to find the greatest among two numbers.
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d is the greatest number\n", num1);
    } else {
        printf("%d is the greatest number\n", num2);
    }

    return 0;
}
