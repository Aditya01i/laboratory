#include<stdio.h>
int main()
{
    int i,arr[10],sum=0;
    printf("enter the matrix elements");
    
    for ( i = 0; i <= 9; i++)
    {
        scanf("%d " ,&arr[i]);
    }
      
    printf(" the matrix is ");
    
    for ( i = 0; i <= 9; i++)
    {
        printf("\t %d" ,arr[i]);
    }
    
    for ( i = 0; i <= 9; i++)
    {
        sum=sum+arr[i];
    }
    
    printf("\n sum is %d" ,sum);
}
   