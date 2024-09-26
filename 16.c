#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers a,b and c");
    scanf("%d%d%d" ,&a,&b,&c);      
    
    if (a>b)
    {  if (a>c)

        printf("a is biggest");
        
      }

    else{

        if(b>c){
            printf("b is biggest");

        }
        else{
            printf("c is biggest");
        }
    }

    
    
    

}

