#include<stdio.h>
int main()
{
    float s,comm;
    printf("enter your sales");
    scanf("%f" ,&s);
    
    if (s<=500)
    {       
        comm=s*5/100;
        printf("your commission is %f" ,comm);
        
    }

    

    else if (s>500 && s<=2000)
    {
        comm=(500*10/100)+35;
        printf("your commission is %f" ,comm);
    }
    
      else if (s>2000 && s<=5000)
    {
        comm=(2000*12/100)+185;
        printf("your commission is %f" ,comm);
    }


      else if (s>5000 )
    {
        comm=s*12.5/100;
        printf("your commission is %f" ,comm);
    }
    
}