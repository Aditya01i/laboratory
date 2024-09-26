#include<stdio.h>
int main()
{   int a[10],b[10],i,c[10],j;

    printf("enter the elements of A array \n");
    for( i = 0; i < 10; i++)
    {
        scanf("%d" ,&a[i]);

    }
    
    printf("the matrix A is \n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d \t" ,a[i]);
    }
    
    printf("enter the matrix B elements \n");

    for ( i = 0; i < 10;  i++)
    {
        scanf("%d" ,&b[i]);
    }
    
    printf("the martix B elements are \n");

    for ( i = 0; i < 10; i++)
    {
        printf("%d \t \n" ,b[i]);
    }
    
    for ( j = 0; j < 10; j++)
    {
        c[j]=a[j]+b[j];

        printf("%d \t" ,c[j]);
    }
    

}