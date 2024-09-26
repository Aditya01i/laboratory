#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);

    a>b ? ( a>c ? printf("a:%d is maximum",a) : printf("c:%d is maximum",c) ) : ( b>c ? printf("b:%d is maximum",b) : printf("c:%d is maximum",c) );
    


    return 0;
}