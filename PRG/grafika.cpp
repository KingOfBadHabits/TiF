#include <stdio.h>
#include <BGIgraphics.h>

int main()
{
    int x=600,y=400;
    int x1= 50,x2=150,x3=100;
    int y1= 50,y2= 50,y3=100;

    initwindow(x,y);

    line(x1,y-y1,x2,y-y2);
    line(x2,y-y2,x3,y-y3);
    line(x1,y-y1,x3,y-y3);

    setcolor(3);
    circle(x1,y-y1,5);
    circle(x2,y-y2,5);
    circle(x3,y-y3,5);

    getch();
    closegraph();

    return 0;
}
