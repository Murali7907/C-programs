#include <stdio.h>

int main()
{
   float F,celcius;
   printf("enter the Farenheit :");
   scanf("%f",&F);
   celcius=((F-32)*5)/9;
   printf("the celcius:%f",celcius);

    return 0;
}
