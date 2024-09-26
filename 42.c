#include<stdio.h>
int main()
{
    int num,i;
    printf("enter any number");
    scanf("%d" ,&num);

    for (i=2;i<=num/2;i++)
    {
        if (num%i==0)
        {
            printf("the number is composite");

            
        }
        else 
        {
            printf("the number is prime");
            
        }
        
        

    }

    
}