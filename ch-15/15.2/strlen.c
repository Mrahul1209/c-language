#include <stdio.h>>

main()

{
    char name [20];

    printf("enter your name:");
    scanf("%[^\n]",&name);

    printf("\n\n");
    printf("name\t : %s\n",name);

    int len=0;

    for(int i=0;name[i]!='\0';i++)
    {
        len++;
    }
    printf("Length\t :%d",len);


}