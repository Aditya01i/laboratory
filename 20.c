#include <stdio.h>

int main()
{

  char operator;
  float a, b, answer;
 
  printf("Enter the operator you want to use: (+, -, *, /)");

  scanf(" %c", &operator);

  printf("Now, enter two number you want to calculate using %c operator:\n>>>", operator);

  scanf("%f %f", &a, &b);

  switch (operator)
  {
  case '+':
    answer = a+ b;
    printf("Your answer of %f + %f = %f", a, b, answer);
    break;

  case '-':
    answer = a- b;
    printf("Your answer of %f - %f = %f", a, b, answer);
    break;

  case '/':
    answer = a / b;
    printf("Your answer of %f / %f = %f", a, b, answer);
    break;

  case '*':
    answer = a * b;
    printf("Your answer of %f X %f = %f", a, b, answer);
    break;

  default:
    printf("Invalid Operator, Please Try again");
    break;
  }

  return 0;
}