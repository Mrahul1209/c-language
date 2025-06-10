#include <stdio.h>

main()
{
    char name[30];

    printf("enter any string :");
    scanf("%[^\n]",&name);

    printf("\n\n");
    printf("name\t : %s\n",name);

    int len = 0;

    for(int i = 0; name[i] != '\0'; i++)
    {
        len++;
    }

    for(int i = 0; i < len; i++)
    {
        int feq = 1;

        for(int j = i+1; j < len; j++)
        {
            if(name[i] == name[j])
            {
                feq++;
                name[j] = '\0';            
            }
        }

        if(name[i] != '\0')
        {
            printf("%c => %d\n", name[i], feq);
        }
    }    
}
