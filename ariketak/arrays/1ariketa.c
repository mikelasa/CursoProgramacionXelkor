#include <stdio.h>

int main ()
{
    int n = 102;
    int m = 30;
    int tmp;


    // while n isnt divisible by m
    while (n % m !=0)
    {
        tmp = n/m;
        n=m;
        m=tmp;
    
    printf("m:\n");
    printf("%d ", m);

    }   
    return 0;
}