#include <stdio.h>

int main()
{
    int num,num1=0,num2=1,temp;
    printf("enter a number");
    scanf("%d",&num);
  
  
  printf("%d %d ",num1,num2);
    for(int i=3;i<=num;i++)
    {      
        temp=num1;
        num1=num2;
        num2=num1+temp;
          
          
          printf("%d ",num2);
         
  
    }

    return 0;
}
