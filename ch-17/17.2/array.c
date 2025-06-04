#include <stdio.h>
#include "function.c"

 void main()
{
    int size;

    printf("enter your elements :");
    size= inputint();

    int a[size];

    arrayinput(size,a);
}