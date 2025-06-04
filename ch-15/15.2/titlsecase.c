#include <stdio.h>

int main()
{
    char name[30];

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    for(int i = 0; name[i] != '\0'; i++)
    {

        if(i == 0 || name[i-1] == ' ')
        {
           if(name[i] >= 'a' && name[i] <= 'z')
            {
                name[i] = name[i] - 32;
            }

            else if(name[i] >= 'A' && name[i] <= 'Z')
            {
                name[i] = name[i] + 32;
            }
        }
        
            
    }

    printf("Title Case: %s\n", name);

    return 0;
}
