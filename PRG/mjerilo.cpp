#include <BGIgraphics.h>
#include <stdio.h>
#include <time.h>

int main()
{
    time_t t;
    int x0,y0,wx=600,wy=400;
    double r;
    double mjx,mjy,mj,gab_X;

    // randomizacija radijusa
    srand((unsigned) time(&t));
    r = rand()%(2*wx);

    // raèunanje mjerila
    gab_X = 2*r;
    mjx = gab_X / wx;
    mjy = gab_X / wy;
    mj  = mjx;

    if (mjx>=1 || mjy>=1) // umanjuje se slika
    {
        if (mjx < mjy) mj=mjy;
    }else // uveæava se slika
    {
        if (mjx > mjy) mj=mjy;
    }

    printf("Radijus: %8.3lf\n",r);
    printf("Mjerilo: %8.3lf",mj);

    // pomak kružnice na sredinu
    x0 = wx/2;
    y0 = wy/2;

    // inicijalizacija prozora
    initwindow(wx,wy);

    // crtanje kružnice
    circle(x0,y0,r/mj);

    getch();
    closegraph();
}
