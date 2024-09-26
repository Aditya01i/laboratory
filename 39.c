#include<stdio.h>
int main()
{
    float a,n,sum=0,b;
    printf("enter the number n");
    scanf("%f" ,&n);

    for (a=2;a<n;)
    {
        a=a+1;
        
        for (b=1;b<=a;b++)
        {
           b= b*(b+1);
        }
            a=a/b;
          sum=sum+a;

    }

        printf("%f" ,sum);
        
    
    
}
