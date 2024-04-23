#include<stdio.h>
void main()
{
    int a, i = 1;
    printf("Enter how many multiplication:");
    scanf("%d",&a);
    while (i<=a)
    {
        int j=1;
        while (j<=10)
        {
            printf("%d x %d = %d \n", i,j,i*j);
            j++;
        }
        i++;
    }
    
    
}
