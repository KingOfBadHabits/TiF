#include <stdio.h>

int main()
{

    int kraj, i;

    unsigned long long int Fib = 0, xFib = 1, nFib=0;

    scanf("%d",&kraj);

    for (i=0;i<kraj;i++)
    {
        printf("%d. %llu\n",i+1,nFib);

        nFib=Fib+xFib;
        xFib=Fib;
        Fib=nFib;
    }
    return 0;
}
