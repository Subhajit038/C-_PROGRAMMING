//Write a program in c to print the following patterns.
* * * * *
 * * * *
  * * *
   * *
    *
   * *
  * * *
 * * * *
* * * * *
  
#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= n - i + 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= n - i + 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
