#include <stdio.h>>

main()

{
    char name [40];

    printf("enter your name:");
    scanf("%[^\n]",&name);

    printf("\n\n");
    printf("name\t : %s\n",name);



    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]>='A' && name[i]<='Z')
        {
            name[i]+=32;
        }
    }
    printf("Lowercase\t :%s",name);


}