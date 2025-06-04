#include <stdio.h>

int inputint()
{
    int n;
    scanf("%d", &n);
    return n;
}

int arraysum(int size, int array[])
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum; 
}

void arrayoutput(int n, int array[])
{
    printf("\n\nArray output\n\n");

    for(int i = 0; i < n; i++)
    {
        printf(" %d\t", array[i]);
    }

    int sum = arraysum(n, array);
    float avg = sum /n;

    printf("\n\nArray sum is: %d\n", sum);
    printf("\nAverage is: %.2f\n", avg); 
}

void arrayinput(int n, int array[])
{
    printf("\n\nArray input\n\n");

    for(int i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        array[i] = inputint();
    }

    arrayoutput(n, array);
}




