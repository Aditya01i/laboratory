#include<stdio.h>
int main()
{
    char ch;
    int ascii;
    printf("enter the character");
    scanf(" %c" ,&ch);

    ascii=ch;

    if (ascii>=97 && ascii<=122)
    {
       printf("it is a small case letter");
 
    }
    else
    {
        printf("it is not a small case letter");
    }
    
    return 0;
    
}