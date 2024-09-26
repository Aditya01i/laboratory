#include<stdio.h>
int main()
{
         int num,a,b=0,d;
         printf("enter a number");
         scanf("%d" ,&num);
         d=num;


         while (num!=0)
         {
            a=num%10;
            b=b*10+a;
            num=num/10;

         }
         
         if (b==d)
         {
            printf("the number is a palindrom");
         }
         else
         {
           printf("the number is not a palindrome");
         }
         
    return 0;
           
}