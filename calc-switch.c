#include<stdio.h>
void main()
{
    int a, b;
    char o;
    printf("enter the operator:");
    scanf("%c",&o);
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d", &b);
    switch (o)
    {
    case '+':
        printf("sum = %d\n", a+b);
        break;
    case '-':
        printf("subtraction = %d \n", a-b);
        break;
    case '*':
        printf("multiplication = %d \n", a*b);
        break;
    case '/':
        printf("division = %d \n", a/b);
        break;
    
    default:
        break;
    }
}