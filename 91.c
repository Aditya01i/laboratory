#include<stdio.h>

void sq_cb(int *pNum)
{
    printf("\nThe Square of the number is: %d", (*pNum) * (*pNum));
    printf("\nThe Cube of the number is: %d", (*pNum) *(*pNum) * (*pNum));
}

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);

    int *pNum = &num;
    sq_cb(&num);

}