#include<stdio.h>
int main()
{
    int m,p,c,e,b,totalper,t;
    
    printf("enter marks of your 5 subjects out of 100");
    scanf("%d%d%d%d%d" ,&m,&p,&c,&e,&b);

    totalper=(m+p+c+e+b)*100/500;

    t=totalper/10;
   

   switch (t) 
   {
   case 10:
   case 9:
   case 8:
            printf("A grade");
    break;

    case 7:
    case 6:
            printf("B grade");
    break;

    case 5:
    case 4:
            printf("C grade");
    break;
    
    case 3:
    case 2:
    case 1:
            printf("D grade"); 
    break;
   
   default: 
            printf("invalid marks");

    break;
   }
    
                                                                                                                                                                                 }