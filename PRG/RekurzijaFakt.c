#include <stdio.h>

int faktorijela (int n)
{
    int faktorijel=1;
    int i;

    for (i=n;i>=1;i--)
    {
        faktorijel=faktorijel*i;
    }
    return faktorijel;
}

int main()
{
    int n;

    printf("Koju faktorijelu da recunam?\n");
    scanf("%d",&n);

    printf("%d! = %d",n,faktorijela(n));

    return 0;
}
