#include<stdio.h>
void main()
{
int num,flag=0,i;
printf("enter a number");
scanf("%d",&num);
for(i=2;i<num;i++)
{
    if(num%i==0)
    {
        flag=1;
        break;
    }
}
if(flag==1)
printf("the number is not prime");
else
printf("the number is prime");
}
