#include<stdio.h>
int main()
{
    int units;
    double amt; 

    printf("Enter amount of units consumed:");
    scanf("%d",&units);

    if(units<0)
    {
        printf("Number of units is always a positive quantity!!");
    }
    if(units>=0 && units<=200)
    {
        amt = 0.5 * units;
        printf("The amount to paid by the customer is:%lf",amt);
    }
    else if(units>=201 && units<=400)
    {
        amt = 100 + 0.65 * (units-200);
        printf("The amount to paid by the customer is:%lf",amt);
    }
    else if(units>=401 && units<=600)
    {
        amt = 230 + 0.8 * (units-400);
        printf("The amount to paid by the customer is:%lf",amt);
    }
    else
    {
        amt = 425 + 1.25 * (units-600);
        printf("The amount to paid by the customer is Rs.%lf",amt);
    }
    return 0;

}