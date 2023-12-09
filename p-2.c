//write a program using for loop to culculate factorial of a number.
#include <stdio.h>
int main(){
    int fact=1,num;
    printf("ENTER THE NUMBER :\n");
    scanf("%d",&num);
    if(num==0)
        fact=1;
    else {
        for (int i = 1; i <= num; i++)
            fact = fact * i;
    }

    printf(" FACTORIAL OF %d IS :%d\n",num,fact);
    return 0;

}
