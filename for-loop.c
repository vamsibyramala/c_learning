#include<stdio.h>
void main()
{
    int a,i;
    printf("Enter a number:");
    scanf("%d",&a);
    for ( i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d", a,i,a*i);
    }
    
}