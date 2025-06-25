#include <stdio.h>

void printCubes(int *a, int size)
{
    printf("\nCubes of all elements:\n");

    for (int i = 0; i < size * size; i++)
    {
        int val = *(a + i);
        int cube = val * val * val;   
        printf("%d ", cube);
    }
}

int main()
{
    int size;

    printf("Enter array's size: ");
    scanf("%d", &size);

    int a[size][size]; 

    printf("\nEnter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printCubes(&a[0][0], size);

}



