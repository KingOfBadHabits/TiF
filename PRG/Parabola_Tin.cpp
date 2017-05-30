#include <stdio.h>

int det (int x11,int x12,int x13,int x21,int x22,int x23,int x31,int x32,int x33)
{
    int det = 0;
    det = (x11*x22*x33)+(x12*x23*x31)+(x13*x21*x32)-((x31*x22*x13)+(x32*x23*x11)+(x33*x21*x12));

    return det;
}

int main()
{
    int X[3][3];
    int Y[3][1];
    int i=0;
    float a,b,c;

    for (i=0;i<3;i++)
    {
        scanf("%d",&X[i][2]);
        X[i][1]=X[i][2]*X[i][2];
        X[i][3]=1;
    }
    for (i=0;i<3;i++)
    {
        scanf("%d",&Y[i][1]);
    }

    int det0 = det(X[0][1],X[0][2],X[0][3],X[1][1],X[1][2],X[1][3],X[2][1],X[2][2],X[2][3]);
    int detA = det(Y[0][1],X[0][2],X[0][3],Y[1][1],X[1][2],X[1][3],Y[2][1],X[2][2],X[2][3]);
    int detB = det(X[0][1],Y[0][1],X[0][3],X[1][1],Y[1][1],X[1][3],X[2][1],Y[2][1],X[2][3]);
    int detC = det(X[0][1],X[0][2],Y[0][1],X[1][1],X[1][2],Y[1][1],X[2][1],X[2][2],Y[2][0]);

    a = detA/det0;
    b = detB/det0;
    c = detC/det0;

    printf("%d\n",detA);
    printf("%f\n",a);
    printf("%f\n",b);
    printf("%f\n",c);
}
