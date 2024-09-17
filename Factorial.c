#include <stdio.h>

int main()
{
    int number,i,prod=1;
    printf("enter a number");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        prod=prod*i;
    }
    printf("the factorial of the number : %d",prod);

    return 0;
}
