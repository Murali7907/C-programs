
#include <stdio.h>

int main()
{
    int num1,num2,ch;
    printf("enter 2 number");
    scanf("%d %d",&num1,&num2);
    printf("\nMenu");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.division");
    printf("\nenter a choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("the sum=%d",num1+num2);
        break;
        case 2:printf("the Subtraction=%d",num1-num2);
        break;
        case 3:printf("the product=%d",num1*num2);
        break;
        case 4:printf("the division=%d",num1/num2);
        break;
        default:printf("Wrong Option");
    }
    

    return 0;
}
