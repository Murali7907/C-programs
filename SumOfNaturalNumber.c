#include <stdio.h>

int main()
{
int number,sum=0,i;
printf("enter a number :");
scanf("%d",&number);
for(i=0;i<=number;i++)
{
    sum=sum+i;
}
printf("the sum of n natural number:%d",sum);
    return 0;
}
