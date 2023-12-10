 //Write a program in c to display fibonacci series.
#include <stdio.h>
int main(){
    int n,a=0,b=1,c,i;
    printf("ENTER THE NUMBER OF TERM :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;

}
