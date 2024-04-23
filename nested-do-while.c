#include<stdio.h>
void main()
{
    int i,j;
    do
    { j=1;
        do
        {
        printf("*");
        j++;
        } while (j<=5);
        printf("\n");
        i++;
    } while (i<=5);
}
