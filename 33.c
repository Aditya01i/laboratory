#include<stdio.h>
int main()
{
    int i,n,num[n],j,c;

    printf("enter how many numbers you want to compare");
    scanf("%d" ,&n);


    printf("enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d" ,&num[i]);

    }

    for ( i = 0; i < n; i++)
    {
        for ( j= 0; j < n-i; j++)
        {
            if(num[j+1]<num[j])
           { c=num[j];
           num[j]=num[j+1];
            num[j+1]=c;
           }

}
    }

    printf("max is %d" ,num[n]);
    printf("the min is %d" ,num[0]);

    
}   