#include<stdio.h>
void main()
{
    int a, i, sum=0;
    for (i = 1; i <= 5; i++)
    {
        printf("Enter %d number:", i);
        scanf("%d", &a);
        if(a<0)
        {
            continue;
        }
        sum = sum + a;
    }
    printf("sum = %d \n", sum);
    
    
}
