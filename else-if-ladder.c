#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    if(a==0)
    {
        printf("the number is nun");
    }
    else if(a%2==0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd")
    }
}