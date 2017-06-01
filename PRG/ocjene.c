#include <stdio.h>

int main()
{
    float x;
    scanf("%f",&x);
    if (x<1.5)printf("Nedovoljan");
    else if (x<2.5)printf("Dovoljan");
    else if (x<3.5)printf("Dobar");
    else if (x<4.5)printf("Vrlo dobar");
    else if (x<=5)printf("Odlican");
    else printf("Lazes");
}

