#include <stdio.h>

//... definicije struktura
typedef struct kompleksni
{
    float re; //... realni dio
    float im; //... imaginarni dio
}kompleksni;

//... definicije funkcija
kompleksni zbroj (kompleksni a, kompleksni b);
kompleksni produkt (kompleksni a, kompleksni b);
kompleksni razlika (kompleksni a, kompleksni b);

int main()
{
    kompleksni x,y,z,p,r; //... deklaracija varijabli tipa "kompleksni"

    printf("\n x = (realni + imaginarni i)\n");
    scanf("%f+%fi",&x.re,&x.im);
    printf("\n y = (realni + imaginarni i)\n");
    scanf("%f+%fi",&y.re,&y.im);

    z = zbroj(x,y); //... zbroj kompleksnog broja
    p = produkt(x,y); //... produkt kompleksnog broja
    r = razlika(x,y); //... razlika kompleksnog broja

    printf("\n zbroj = %.2f + %.2fi",z.re,z.im);
    printf("\n produkt = %.2f + %.2fi",p.re,p.im);
    printf("\n razlika = %.2f + %.2fi",r.re,r.im);

    return 0;
}

//... definicije funkcija
kompleksni zbroj (kompleksni a, kompleksni b)
{
    kompleksni z;
    z.re=a.re+b.re;
    z.im=a.im+b.im;
    return z;
}

kompleksni produkt (kompleksni a, kompleksni b)
{
    kompleksni z;
    z.re=a.re*b.re-a.im*b.im;
    z.im=a.re*b.im+a.im*b.re;
    return z;
}

kompleksni razlika (kompleksni a, kompleksni b)
{
    kompleksni z;
    z.re=a.re-b.re;
    z.im=a.im-b.im;
    return z;
}
