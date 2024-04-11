#include<stdio.h>
void main ()
{
    int x=1, a, b, c;
    c=--x;
    a=++x;
    b=x++;
    printf("x=%d \n", x);
    printf("a=%d \n", a);
    printf("b=%d \n", b);
    printf("c=%d \n", c);
}