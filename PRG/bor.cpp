#include <stdio.h>
#include <BGIgraphics.h>
#include <time.h>

// deklaracija globalnih varijabli

int wx=600,wy=400;

float odmak(int n);
void bor(int x0,int y0,int mj); // deklaracija funckije bor

int main()
{
    int br = 0;
    int x,y,mjerilo;
    time_t t;

    initwindow(wx,wy); // otvaranje prozora
    srand((unsigned) time(&t));
    for (br=0;br<(rand()%10)+4;br++)
    {
        x = rand()%wx;
        y = rand()%wy;
        mjerilo = (rand()%10)+5;

        bor(x,y,mjerilo); // crtanje bora pomocu funkcije bor
    }
    getch();
    closegraph();
    return 0;
}

float odmak(int n)
{
    float x;
    time_t t;
    srand((unsigned) time(&t));
    x = n+((rand()%10)/100);
    return x;
}

void bor(int x0,int y0,int mj) // funkcija bor
{
    // koordinate potrebne za crtanje bora
    float x[] = {1,1,5,1,4,1,3,1,2,0};
    float y[] = {0,3,3,6,6,8,8,10,10,12};
    float xr,yr;
    int i = 0;

    // pretvaranje boje u zeleno
    setcolor(2);

    moveto(x0,(wy-y0));

    // crtanje desne strane bora
    do{
        xr = x0+(x[i]*mj);
        yr = wy - (y0 + (y[i]*mj));
        lineto(xr,yr);
        printf("x = %f, y = %f, i = %d\n", xr,yr,i);
        i++;
    } while (x[i]!=0 && y[i]!=0);

    // crtanje lijeve strane bora
    do{
        xr = x0-(x[i]*mj);
        yr = wy - (y0 + (y[i]*mj));
        lineto(xr,yr);
        printf("x = %f, y = %f, i = %d\n", xr,yr,i);
        i--;
    } while (x[i]!=0 && y[i+1]!=0);

    lineto(x0,(wy-y0));

}
