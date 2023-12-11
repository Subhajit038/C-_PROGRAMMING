//Write a  program in C that converts currency from one unit to another.
#include <stdio.h>

int main() {
    float amount;
    int choice;

    printf("Enter the amount in USD: ");
    scanf("%f", &amount);

    printf("Choose an option:\n");
    printf("1. Convert to Euro\n");
    printf("2. Convert to British Pound\n");
    printf("3. Convert to Japanese Yen\n");
    printf("4. Convert to Indian Rupee\n");
    printf("5. Convert to Australian Dollar\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            amount = amount * 0.85;
            printf("Converted amount: %.2f Euro\n", amount);
            break;
        case 2:
            amount = amount * 0.73;
            printf("Converted amount: %.2f British Pound\n", amount);
            break;
        case 3:
            amount = amount * 109.69;
            printf("Converted amount: %.2f Japanese Yen\n", amount);
            break;
        case 4:
            amount = amount * 74.94;
            printf("Converted amount: %.2f Indian Rupee\n", amount);
            break;
        case 5:
            amount = amount * 1.35;
            printf("Converted amount: %.2f Australian Dollar\n", amount);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}

