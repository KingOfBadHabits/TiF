#include <BGIgraphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

int main ()
{
    int wx=600,wy=400;
    int x[20],y[20],r[20];
    int cnt=0;
    time_t t;
    int i=0;
    float avgX=0,avgY=0,d,maxD=0;
    char str[2];

    initwindow(wx+100,wy+100);

    srand((unsigned) time(&t));

    do
    {
        x[cnt] = rand() % wx;
        y[cnt] = rand() % wy;
        r[cnt] = rand() % (50-20)+20;

        circle(x[cnt],y[cnt],r[cnt]);
        sprintf(str,"%2d",cnt);
        outtextxy(x[cnt],y[cnt],str);
        cnt++;
    } while (cnt < 20);

    for (i=0;i<20;i++)
    {
        avgX+=x[i];
        avgY+=y[i];
    }

    avgX=avgX/20;
    avgY=avgY/20;

    for(i=0;i<20;i++)
    {
        d=sqrt((x[i]-avgX)*(x[i]-avgX)-(y[i]-avgY)*(y[i]-avgY))+r[i];
        if(d>maxD) maxD=d;
        printf("%i. maxD= %f, d= %f\n",i,maxD,d);
    }

    setcolor(6);
    circle(avgX,avgY,maxD);
    setcolor(5);
    circle(avgX,avgY,10);
    printf("avg %f %f\n",avgX,avgY);
    printf("obuhvat %f",maxD);

    getch();
    closegraph();
}
