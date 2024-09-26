#include<stdio.h>
#include<conio.h>
int main()
{ 
    float fa,c;
    printf("Enter the temperature in fahrenheit");
    scanf("%f" ,&fa) ;

     c=(fa-32)*5/9;
     printf("The temperature in celsius is %f" ,c);
     return 0;

}