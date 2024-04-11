#include<stdio.h>
void main ()
{
    int x=1, a, b, c;
    a=++x;
    b=x++;
    c=--x;
    printf("x=%d \n", x);
    printf("a=%d \n", a);
    printf("b=%d \n", b);
    printf("c=%d \n", c);
}