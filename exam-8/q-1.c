#include <stdio.h>

main()

{
    char str[100];
    char *ptr = str;
    int len=0;

    printf("enter any strings :");
    gets(str);

    while(*ptr !='\0')
    {
        ptr++;
        len++;
    }

    printf("the length of a string is %d",len);

}