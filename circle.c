//Draeing n-gons
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
#define PI 3.14159265
#define N 30
struct point
{
    int x;
    int y;
};
typedef struct point POINT;
drawnpoly(int R, int n,int xc,int yc)
{
    POINT pts[N];
    int i,j;
    for (i = 0; i < n; i++)
    {
        pts[i].x=xc+R*cos(2*PI*i/n);
        pts[i].y=yc+R*cos(2*PI*i/n);
    }
    for(i=0;i<n:i++)
    line(pts[i].x,pts[i].y,pts[(i+1)%n].x,pts[(i+1)%n].y);
}
main()
{
    int gdriver =DETECT,gmode,errcode;
    initgraph(&gdriver,&gmode,"d:\\tc\\bgi");
    errcode=graphresult();
    if(errcode!=0)
    {
        printf("Graphics error:%s\n",grapherrormsg(errcode));
        printf("Cannot  continue. press any key to terminate");
        getch();
        exit(1);
    }
    drawnpoly(30,3,30,60);
    outtextxy(10,100,"n:");
    outtextxy(30,100,"3");
    drawnpoly(30,4,120,60);
    outtextxy(120,100,"4");
    drawnpoly(30,5,210,60);
    outtextxy(210,100,"5");
    drawnpoly(30,6,300,60);
    outtextxy(300,100,"6");
    drawnpoly(30,8,390,60);
    outtextxy(390,100,"8");
    drawnpoly(30,12,480,60);
    outtextxy(475,100,"12");
    drawnpoly(30,30,560,60);
    outtextxy(555,100,"30");
    getch();
}
