#include<stdio.h>
void main()
{
    int num,rev=0;
    printf("enter the number: ");
    scanf("%d",&num);
    printf("the rev of the number: ");
    while(num!=0)
    {
    rev=num%10;
    printf("%d",rev);
    num=num/10;
    
   
    }
   
}
