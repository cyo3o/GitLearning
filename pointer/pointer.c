#include <stdio.h>

int Add(int a, int b)
{
    return a+b;
}
void main()
{
    int a = 3, b = 4;
    int (*p)(int,int);
    p = Add;
    int c = (*p)(a,b);
    printf("%d\n",c);
}