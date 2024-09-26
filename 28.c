#include<stdio.h>
int main()
{
    int sum,num,q,temp;
        sum=0;
     printf("Enter the number");
     scanf("%d" ,&num);
     temp=num;

    while(num!=0)
    {
        q=num%10;
        sum=sum+q*q*q;
        num=num/10;

    }
       if (sum==temp)
       {
        printf("%d" ,sum);
       }
       else
       {
        printf("its not armstrong number");
       }
    


}