#include<stdio.h>
int main(){
    int num,temp,orig_num,sum=0;

    printf("Enter the number:");
    scanf("%d",&num);

    orig_num = num; 
    while(num!=0)
    {
        temp = num%10;
        sum = sum + temp;
        num = num/10;
    }
    printf("The sum of the individual digits of %d is:%d",orig_num,sum);
    return 0;
}