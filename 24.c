#include<stdio.h>
int main()
{
    float y,x,n;

    printf("enter the number x \n");
    scanf("%f" ,&x);
    printf("enter n");
    scanf("%f" ,&n);
   if (n==1)
   {
        y=1+x;

        printf("%f" ,y);
   }
   else if (n==2)
   {
        y=1+x/n;
        
        printf("%f" ,y);

   }
   else if (n==3)
   {
     y=1+x*x*x;

     printf("%f" ,y);

   }
   
   else{
        y=1+n*x;
        printf("%f" ,y);
   }
    
}