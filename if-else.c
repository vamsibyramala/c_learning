#include<stdio.h>
void main()
{
    int a;
    printf("enter age=");
    scanf("%d", &a);
    if (a>18)
    {
        printf("person is major\n");
    }
    else
    {
        printf("person is minor\n");
    }
}