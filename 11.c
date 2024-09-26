#include<stdio.h>
int main()
{
    int hours,minutes,time,seconds;
    printf("enter the time");
    scanf("%d" ,&time);

    hours=time/3600;
    minutes=time/60;
    seconds=time%60;

    

    printf("%d hours %d minutes %d seconds" ,hours,minutes,seconds);



}