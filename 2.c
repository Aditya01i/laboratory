#include<stdio.h>
int main()
{
    float a,b,c,d,e,sum,per;
    printf("enter the marks of your 5 subjects");
    scanf("%f%f%f%f%f" ,&a,&b,&c,&d,&e);

    sum=a+b+c+d+e;

    per=sum*100/500;

    printf("your total marks out of 500 are %f \n" ,sum);
    printf("your percentage is %f" ,per);

}