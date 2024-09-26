#include<stdio.h>
int main()
{
    int a,i;
    printf("enter the number");
    scanf("%d" ,&a);

    for ( i = 0; i < a; i++)
    {
        
        if (a%i==0)
        {
            printf("the number is prime");
        }
        else
        {
            printf("the number is odd");
        }
        
        
    }
    
}