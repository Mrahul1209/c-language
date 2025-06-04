#include <stdio.h>

void loop(int start, int end)
{
    if(start<=end)
    {
        printf("%d\t",start);

        start++;

        loop(start,end);
    }
}

main()
{
        loop(1,10);

}