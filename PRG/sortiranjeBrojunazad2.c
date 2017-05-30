#include <stdio.h>

void sortiraj(int A[],int n);
int unos(int A[]);
void ispis(int A[],int n);

int main()
{
    int n=10;
    int A[n];

    n=unos(A);
    sortiraj(A,n);
    ispis(A,n);
    return 0;
}

void sortiraj(int A[], int n)
{
    int i,j;
    int pom;
    for (i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(A[i]<A[j])
            {
                pom = A[i];
                A[i] = A[j];
                A[j] = pom;
            }
        }
    }

}

int unos(int A[10])
{
    int broj;
    int i=0;

    scanf("%d",&broj);
    do
    {
        A[i]=broj%10;
        broj=broj/10;
        i++;
    }while(broj>0);
    return i;
}

void ispis(int A[],int n)
{
   int k;
    for(k=0;k<n;k++)
    {
        printf("%d",A[k]);
    }
}
