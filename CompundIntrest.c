#include <stdio.h>
#include<math.h>

int main()
{
    float pa,r,t;
    printf("enter the principle amount,rate and time");
    scanf("%f %f %f",&pa,&r,&t);
    float amt=pa*((pow((1+r/100),t)));
    float ci=amt-pa;
    printf("the Simple Intrest:%f",ci);
    return 0;
}
