#include<stdio.h>
int main()
{
         int num,a,b=0;
         printf("enter a number");
         scanf("%d" ,&num);

         while (num!=0)
         {
            a=num%10;
            b=b*10+a;
            num=num/10;

         }

         printf("%d" ,b);

         return 0; 
         
}       