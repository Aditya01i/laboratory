#include<stdio.h>
int main(){
    int num,fact=1,i;
    printf("Enter the number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        fact = fact * i;
    }
    printf("The factorial of the number is:%d",fact);
    return 0;
}