#include <stdio.h>

int* findmax(int* arr, int size);

int main ()
{
    int size;
    int array[4]  = {2, 11, 34, 32};
    size = 4;

    // esto devuelve la direccion del maximo en ese array
    int *max = findmax(array, size);

    printf("max: %d\n", *max);

    return 0;
}

int* findmax(int* arr, int size)
{

    int i;
    // first element is the max
    int *res = arr;

    for (i = 0; i < size; i++)
    {
        if (*res < *(arr + i))
        {
            res = arr + i;
        }
    }

    return res;
}