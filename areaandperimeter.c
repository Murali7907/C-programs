#include <stdio.h>
#include<math.h>

int main()
{
 int l,b;
 printf("enter the length and bredth");
 scanf("%d %d",&l,&b);
 int area=l*b;
 int perimeter=2*(l+b);
 printf("the area=%d",area);
 printf("\nthe perimeter=%d",perimeter);
    return 0;
}
