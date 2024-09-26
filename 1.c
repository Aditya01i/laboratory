#include<stdio.h>
#include<conio.h>
int main()
{
  float p,r,t;
  float simple_interest;
  
  printf("enter p,r and t where p=principal,r=rate of interest,t=time");
  scanf("%f%f%f" ,&p,&r,&t);
  simple_interest=(p*r*t)/100;

  printf("The simple interest is %f" ,simple_interest);
  return 0;
  




}