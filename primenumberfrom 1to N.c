#include<stdio.h>
void main()
{
    int n,i;
    printf("enter a number");
    scanf("%d",&n);
    printf("\nthe prime numbers are:");
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            
          printf("%d ",i);
            
        }
        
    }
    
}
