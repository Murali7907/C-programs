#include <stdio.h>

int main()
{
 int i,j,num,k;
 printf("enter a number:");
 scanf("%d",&num);
 for(i=0;i<=num;i++)
 {
     for(k=1;k<=i;k++)
     {
         printf(" ");
     }
     
     for(j=1;j<=num-i;j++)
     {
         printf("* ");
     }
     
     printf("\n");
 }

    return 0;
}
