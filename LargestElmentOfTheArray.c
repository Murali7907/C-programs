#include <stdio.h>
int main() {
  int size;
  double arr[20];
  printf("Enter the size of the array");
  scanf("%d", &size);
  for (int i = 0; i < size; ++i) 
  {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  // storing the largest number to arr[0]
  for (int i = 1; i < size; ++i) 
  {
    if (arr[0] < arr[i])
    {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %.2lf", arr[0]);

  return 0;
}
