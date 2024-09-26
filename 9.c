#include<stdio.h>
int main()
{
    float hours,mins,sec,totalsec;

    printf("Enter the time in hours,minutes and seconds");
    scanf("%f%f%f" ,&hours,&mins,&sec);

    totalsec= hours*60*60 + mins*60 +sec;

    printf("the total seconds are %f" ,totalsec);

    
}