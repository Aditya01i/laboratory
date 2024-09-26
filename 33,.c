#include<stdio.h>

int main()
{
    int n,max,min; 

    printf("Enter how many numbers you want to input :"); 
    scanf("%d",&n);

    if(n<=2)
    {
        printf("Try entering more values for better comparison");
    }
    else{

        int num[n];
        printf("Enter number 1:"); 
        scanf("%d",&num[0]);

        max=num[0];
        min=num[0];


        for(int i=1;i<=n-1;i++)
        {
            printf("\nEnter number %d:",i+1); 
            scanf("%d",&num[i]);

            if(num[i]>max)  
            {
                max = num[i];
                
            }
            if(num[i]<min) 
            {
                min = num[i];
            }
        }

        
        printf("\nMaximum :%d",max);
        printf("\nMinumum: %d",min);
}
    return 0;
}