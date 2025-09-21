#include <stdio.h>

//function to swap two integers
void swap(int* a, int* b);

int main()
{
    int a = 5;
    int b = 10;

    printf("a before: %d\n", a);
    printf("b before: %d\n", b);

    swap(&a, &b);

    printf("a later: %d\n", a);
    printf("b later: %d\n", b);

    return 0;
}

void swap(int* a, int* b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;

}