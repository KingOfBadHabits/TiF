#include <stdio.h>

int unos(int n, int A[n][n])
{
    int redak, stupac;

    for (redak=0;redak<n;redak++)
        for (stupac=0;stupac<n;stupac++)
        {
            printf("\n A[%i,%i]=", redak, stupac);
            scanf("%i",&A[redak][stupac]);
        }
        printf("\n----- gotov unos matrice -----\n");
    return A;
}
///... funkcija za ispis matrice podataka
void ispis(int n, int A[n][n])
{
    int i=0,j=0;
    for(i=0; i<n;i++){
        for(j=0;j<n;j++)
            printf(" %5i",A[i][j]);
        printf("\n");
    }
}

float Sarrus (int a[3][3])
{
    int i;
    float det=0;
    for(i=0;i<3;i++)
      det = det + (a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2][(i+1)%3]));
    return det;
}

int main()
{
    int rang=3;
    int A[rang][rang], A2[5][5];
    float D;


    unos(rang,A);
    ispis(rang,A);
    D = Sarrus(A);
    printf("%f",D);
    unos(5,A2);
    ispis(5,A2);
    return 0;
}
