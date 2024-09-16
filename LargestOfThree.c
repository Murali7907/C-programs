#include <stdio.h>

int main()
{
    int num1,num2,num3;
    printf("enter three number");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2&&num1>num3)
    {
        printf("a is greater");
    }
    else if(num2>num1&&num2>num3)
    {
        printf("b is greater");
    }
    else 
    {
        printf("c is greater");
    }

    return 0;
}
