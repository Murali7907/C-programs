
#include <stdio.h>
void main()
{
	int i, j = 1,num;
	printf("enter the number");
	scanf("%d",&num);


	for (i = 1; i <= (num * (num + 1)) / 2; i++)
	{

		printf("%d ", i);

		
		if (i == (j * (j + 1)) / 2)
		{
			printf("\n");
			j++;
		}
	}
}
