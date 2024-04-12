#include<stdio.h>
void main()
{
    int a;
    printf("enter a number");
    scanf("%d", &a);
    if (a<10)
    {
        if (a>5)
        {
            printf("number is greater than 5\n");
        }
        else
        {
            printf("number is less than 5\n")
        }
    }
    else
    {
        printf("number is greater than 10\n");
    }
}