//write a program in c to check the number is prime or composite.
#include <stdio.h>
int main(){
    int a;
    int c=0;
    printf("ENTER ANY POSITIVE INTEGER :");
    scanf("%d",&a);
for(int i=1;i<=a;i++) {
    if (a % i == 0)
        c++;
}
if (c==2)
    printf("THE NUMBER IS A PRIME");
else
    printf("THE NUMBER IS A COMPOSITE");

return 0;
}
