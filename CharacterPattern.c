#include <stdio.h>

int main()
{
    int row,i,j;
    char c='A';
    printf("enter the row");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",c++);
             
        }
       
        printf("\n");
    }

    return 0;
}
