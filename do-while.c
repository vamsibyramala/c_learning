#include<stdio.h>
void main()
{
    int a,i=1;
    printf("Enter a number:");
    scanf("%d",&a);
    do
    {
        printf("%d x %d = %d \n", a,i,a*i);
    } while (i<=10);
    
}