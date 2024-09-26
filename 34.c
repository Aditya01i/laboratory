#include<stdio.h>
int main()
{
    int a=1,b=1,c,i,n;
    printf("enter till how many n terms you want series");
    scanf("%d" ,&n);

    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d \n" ,c);
        a=b;
        b=c;

    }

    return 0;

    
    
}