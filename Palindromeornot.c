#include <stdio.h>

int main()
{
    int num,org_num,rev_num,rem;
    printf("enter a number");
    scanf("%d",&num);
    org_num=num;
    while(num!=0)
    {
        rem=num%10;
        rev_num=rev_num*10+rem;
        num=num/10;
    }
    if(org_num==rev_num)
    {
        printf("its is pallindrome");
    }
    else
    printf("its is not a pallindrome");

    return 0;
}
