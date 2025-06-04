#include <stdio.h>
int fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

main()
{
    int ans = fact(5);
    printf("ans : %d",ans);
}