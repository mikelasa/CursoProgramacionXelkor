#include <stdio.h>

void increment(int *x);

int main()
{

    int n = 5;

    printf("n before: %d\n", n);

    increment(&n);

    printf("n later: %d\n", n);

    return 0;
}

void increment(int *n)
{

    // if you pass n without * you will change the address of n, not its value
    (*n) += 1;

}