#include <stdio.h>

int main()
{
  int arr[10][10],num,i,j,row,col;
  printf("enter the size of row and coloumn");
  scanf("%d %d",&row,&col);
   printf("enter the elemnts of Array:");
  for(i=1;i<=row;i++)
  {
      for(j=1;j<=col;j++)
      {
          scanf("%d",&arr[i][j]);
      }
  }
    printf("enterd elemnts of Array:\n");
  for(i=1;i<=row;i++)
  {
      for(j=1;j<=col;j++)
      {
          printf("%d",arr[i][j]);
      }
      printf("\n");
  }

    return 0;
}
