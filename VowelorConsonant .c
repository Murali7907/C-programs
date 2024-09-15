#include<stdio.h>
void main()
{
    char c;
    printf("enter a character");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        printf("the enterd character %c is vowel",c);
    }
    else
    {
        printf("the enterd character %c is consonent",c);
    }
}
