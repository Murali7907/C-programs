#include<stdio.h>
void main()
{
    int num1,num2;
    printf("enter 2 number");
    scanf("%d %d",&num1,&num2);
    printf("\nbefor swap : a=%d,b=%d",num1,num2);
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("\nafter swap : a=%d,b=%d",num1,num2);
}
