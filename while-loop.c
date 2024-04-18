#include<stdio.h>
void main()
{
    int a,i=1;
    printf("Enter a number:");
    scanf("%d", &a);
    while(i<=10)
    {
        printf("%d x %d =%d \n",a,i,a*i);
        i++;
    }
}