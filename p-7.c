//W.A.P a program in c to display your name n Number of times in for loop.
#include <stdio.h>

int main() {
    char name[] = "your name";
    int number_of_times = 10;
    int i;

    for (i = 0; i < number_of_times; i++) {
        printf("%s\n", name);
    }

    return 0;
}
