#include<stdio.h>
int main()
{
    char ch;
    int a;
    
    printf("enter the character");
    scanf("%c" ,&ch);
    a=ch;
    
    if (ch>=65 && ch<=90)
    {
        printf("This is Capital Letter"); 
    }
    else if(ch>=97 && ch<=122)
    {
        printf("This is Small Case Letter");
    }
    else if(ch>=48 && ch<=57)
    {
        printf("This is a digit");
    }
    else
    {
        printf("This is a Special Character");
    }

    return 0;
 
}