#include <stdio.h>
int main()
{
  int num, j, i;

  printf("Enter number of rows\n");
  scanf("%d", &num);

  for (j = 1; j <= num; j++)
  {
    for (i = 1; i <= num-j; i++)
      printf(" ");

    for (i = 1; i <= 2*j-1; i++)
      printf("*");

    printf("\n");
  }

  for (j = 1; j <= num - 1; j++)
  {
    for (i = 1; i <= j; i++)
      printf(" ");

    for (i = 1 ; i <= 2*(num-j)-1; i++)
      printf("*");

    printf("\n");
  }

  return 0;
}
