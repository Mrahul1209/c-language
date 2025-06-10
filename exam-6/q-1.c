#include <stdio.h>

main()

{

     char str[100];

    printf("enter any string :");
    scanf("%[^\n]",&str);

    printf("\n\n");
    printf("name\t : %s\n",str);

    int len =0;

    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }

    int palindrome=1;

    for(int i=0;i<len/2;i++)

    {
        if(str[i]!=str[len-1-i])
        {
            palindrome=0;
        }
    }
    if(palindrome)
    {
        printf("string is palindrome\n");    
    }
    else
    {
        printf("string is not palindrome");
    }
}


