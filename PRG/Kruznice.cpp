#include <stdio.h>
#include <BGIgraphics.h>

int main()
{
    int wx=200,wy=300;
    int min,i;
    float R0,r;

    printf("\nwx = ");
    scanf("%d",&wx);
    printf("\nwy = ");
    scanf("%d",&wy);

    initwindow(wx,wy);

    if (wx < wy)
        min = wx;
    else
        min = wy;

    R0 = 0.05 * min;
    r = R0;

    for (i=1;i<=10;i++)
    {
        setcolor(i+1);
        circle(wx/2,wy/2,r);
        r += R0;
    }

    getch();
    closegraph();

    return 0;
}
