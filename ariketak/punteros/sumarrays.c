#include <stdio.h>

int sumArrays(int* arr, int size);

int main()
{

    int res, size;
    int array[4]  = {1, 2, 3, 4};

    size = 4;
    res = sumArrays(array, size);

    printf("suma total: %d\n", res);

    return 0;
}

int sumArrays(int* arr, int size)
{

    int i, res = 0;
    for (i = 0; i < size; i++)
    {
        res += *(arr + i);
    };
    
    return res;
}