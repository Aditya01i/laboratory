#include<stdio.h>
int main()
{
    int a,n,b;
    printf("enter the number n");
    scanf("%d" ,&n);

    for (a=0;a<n;)
    {
        a=a+1;
        b=a*a;
        printf("%d \n" ,b);

    }
    
}