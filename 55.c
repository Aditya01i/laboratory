#include<stdio.h>
int main()
{
    int i,num[10],count1=0,flag=0,count2=0;

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
        if (num[i]%2==0)
        {   
            flag=1;
            count1=count1+1;
        }
        else
        {
            count2=count2+1;
        }
        
    }

    
        
            printf("the even numbers are %d \n " ,count1);
    
        
        
            printf("the odd numbers are %d" ,count2); 
            
        
    

    
}