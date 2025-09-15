#include <stdio.h>

int main ()
{
    int n = 12;
    int m = 15;
    int tmp, emaitz;

    if (n<m)
    {
        tmp = m;
        m = n;
        n = tmp;

        emaitz = n;

        // while emaitz isnt divisible by m
        while (emaitz % m !=0)
        {
            emaitz = emaitz + n;

            printf("emaitz:\n");
            printf("%d ", emaitz, "\n");
        }

    }

    return 0;
}