#include<stdio.h>
void main()
{
    int a,i=0;
    printf("Enter a number:");
    scanf("%d", &a);
    while(i<=10)
    {
        printf("%d x %d =%d",a,i,a*i);
        i++;
    }
}