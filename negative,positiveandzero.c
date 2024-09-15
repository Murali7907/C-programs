#include <stdio.h>

int main()
{
    int number;
    printf("enter the nuber\n");
    scanf("%d",&number);
    if(number==0)
{
    printf("the number is zero");
}
   else if(number<0)
    {
        printf("\nthe number is negative");
    }
    else
    printf("\nthe number is positive");
    return 0;
}
