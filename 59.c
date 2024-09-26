#include <stdio.h>
int main()
{
    int a[10], b[10], i, j, c, k,l;

    printf("enter the array A elements");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("the matrix A is \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d \t", a[i]);
    }

    printf("enter the matrix B elements \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("the martix B elements are \n");

    for (i = 0; i < 10; i++)
    {
        printf("%d \t \n", b[i]);
    }

    for (j = 0; j < 10; j++)
    {
        c=a[j];
        a[j] = b[j];
        b[j] = c;
    }

    printf("the matrix A is \n");

    for (k = 0; k < 10; k++)
    {
        printf("%d \t ", a[k]);
    }

    printf("\n the matrix B is \n");

    for (j = 0; j < 10; j++)
    {
        printf("%d \t", b[j]);
    }
}