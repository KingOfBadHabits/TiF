#include <stdio.h>

void sortiraj(int[],int);

void unos(int[]);

void ispis(int[]);

int main()
{
    int n=10;
    int A[n];

    unos(A);

    //sortiraj(A,n);

    //ispis(A);

    return 0;
}

void sortiraj(int A[10], int n)
{
    int i,j;
    int pom;
    for (i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            pom = A[j];
            A[i] = A[j];
            A[j] = pom;
        }
    }
}

void unos(int A[])
{
    int broj;
    int i=0;

    scanf("%d",&broj);
    do
    {
        A[i]=broj%10;
        broj=broj/10;
        i++;
        printf(broj);
    }while(broj>0);
}

void ispis(int A[])
{
    int i;
    for(i=0;i<=9;i++)
    {
        printf("%d",A[i]);
    }
}
