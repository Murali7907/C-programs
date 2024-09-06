#include <stdio.h>

int main()
{
    float pa,r,t;
    printf("enter the principle amount,rate and time");
    scanf("%f %f %f",&pa,&r,&t);
    float si=(pa*r*t)/100;
    printf("the Simple Intrest:%f",si);
    return 0;
}
