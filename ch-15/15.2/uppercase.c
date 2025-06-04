#include <stdio.h>>

main()

{
    char name [30];

    printf("enter your name:");
    scanf("%[^\n]",&name);

    printf("\n\n");
    printf("name\t : %s\n",name);



    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]>='a' && name[i]<='z')
        {
            name[i]-=32;
        }
    }
    printf("Uparcase\t :%s",name);


}