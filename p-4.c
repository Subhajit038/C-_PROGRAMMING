//write a program in c to find the greatest between 2 number using ternary operator.

#include <stdio.h>

int main() {
    int num1, num2, greatest;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    greatest = (num1 > num2) ? num1 : num2;

    printf("The greatest number is: %d\n", greatest);

    return 0;
}



