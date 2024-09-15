#include<stdio.h>
void main()
{
    int number;
    printf("enter a number");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }
}
