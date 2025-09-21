#include <stdio.h>

//function to swap two integers
void swap(int* a, int* b, int* c);

int main()
{
    int a = 5;
    int b = 10;
    int c = 15;

    printf("a before: %d\n", a);
    printf("b before: %d\n", b);
    printf("c before: %d\n", c);

    swap(&a, &b, &c);

    printf("a later: %d\n", a);
    printf("b later: %d\n", b);
    printf("c later: %d\n", c);

    return 0;
}

void swap(int* a, int* b, int* c)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = *c;
    *c = tmp;

}