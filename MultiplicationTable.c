#include <stdio.h>

int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    printf("the multiplication table of %d is:\n",num);
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",i,num,i*num);
    }
    return 0;
}
