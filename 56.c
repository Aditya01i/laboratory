#include<stdio.h>
int main()
{
    int i,num[10],count1=0,count2=0,count3=0;

    printf("enter the elements you want to check");

    for ( i = 0; i < 10; i++)
    {
        scanf("%d" ,&num[i]);
    }

    printf("the matrix is ");

    for(i=0;i<10;i++)
    {
        printf("%d \t" ,num[i]);
    }


    for ( i = 0; i < 10; i++)
    {
        if (num[i]>0)
        {
            count1=count1+1;
        }
        else if (num[i]==0)
        {
            count2=count2+1;
        }
        else
        {
            count3=count3+1;
        }
        
    }

        printf("\n the number of positive numbers are %d \n " ,count1);
        printf("the number of negative numbers are %d \n " ,count3);
        printf("the numbers=0 are %d \n " ,count2);
}