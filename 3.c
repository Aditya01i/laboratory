#include<stdio.h>
#include<conio.h>
int main(){
    int gross_salary,HRA,Other_allowances,basic_salary;

    printf("Enter your Gloss salary,HRA and other allowances");
    scanf("%d%d%d" ,&basic_salary,&HRA,&Other_allowances);

    gross_salary=basic_salary+HRA+Other_allowances;

    printf("Your gross salary is %d" ,gross_salary);

    return 0;
    

    


}
