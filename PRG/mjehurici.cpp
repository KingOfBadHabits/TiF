#include <BGIgraphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
    int wx=500,wy=500;
    int x,y,r,clr;
    int cnt=0;
    char tipka=0;
    time_t t;

//    printf("\nwx = ");
//    scanf("%d",&wx);
//    printf("\nwy = ");
//    scanf("%d",&wy);

    initwindow(wx,wy);

    srand((unsigned) time(&t));

    do
    {
        x = rand() % wx;
        y = rand() % wy;
        r = rand() % 5;
        r = r + 5;
        clr = rand() % 13;
        clr = clr + 1;

        setcolor (clr);

        circle(x,y,r);
        cnt++;
        if(kbhit()) tipka = getch();
        if(tipka == 27) break;
    } while (cnt <= 1e6);
    getch();
    closegraph();
}
