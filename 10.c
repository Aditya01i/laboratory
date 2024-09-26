#include<stdio.h>
int main()
{
    float m,p,c,e,CM;
    printf("Enter your marks in maths,physics,chemistry out of 200  and in entrance exam out of 100");

    
    scanf("%f%f%f%f" ,&m,&p,&c,&e);
    CM=m/2+p/2+c/2+e;

    printf("the cutoff marks is %f" ,CM);
    




}