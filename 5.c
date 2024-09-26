#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers ");
    scanf("%d%d" ,&a,&b);
    printf(" a=%d , b=%d \n" ,a,b);

    c=a;
    a=b;
    b=c;
    


    printf("a now=%d , b now=%d" ,a,b);
    
     
 
    return 0;



}