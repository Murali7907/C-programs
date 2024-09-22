#include <stdio.h>
int main() {
  int size;
  double arr[100];
  printf("Enter the size of the array ");
  scanf("%d", &size);

  for (int i = 0; i < size; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

 
  for (int i = 1; i < size; ++i) {
    if (arr[0] <= arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("\nMaximum Element = %.2lf", arr[0]);


 
  for (int i = 1; i < size; ++i) {
    if (arr[0] >= arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("\nMinimum Element = %.2lf", arr[0]);

  return 0;
}
