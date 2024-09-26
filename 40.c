#include<stdio.h>
int main()
{
    int num,i,sum=0;

    for ( ;num>0 ; )
    {
        printf("enter any number");
        scanf("%d" ,&num);

        sum=sum+num;

    }

    printf("%d" ,sum-num);
    
    
}