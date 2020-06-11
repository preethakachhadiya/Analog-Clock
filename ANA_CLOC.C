#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<strings.h>
#include<math.h>

void minSecPost(int xrad,int midx,int midy,int x[60],int y[60])
{
   int i,j=45;
   for(i=360;i>=0;i=i-6)
   {
      x[j]=midx-(xrad*cos((i*3.14)/180));
      j[j--]=midy-(xrad*sin((i*3.14)/180));
      j=(j==-1)?59:j;
   }
}

void calcPoints(int radius,int midx,int midy,int x[12],int y[12])
{
   int x1,y1;
   x[0]=midx,y[0]=mid-radius;
   x[6]=midx,y[6]=midy+radius;
   x[3]=midx+radius,y[3]=midy;
   x[9]=midx-radius,y[9]=midy;

   x1=(int)((radius/2)*sqrt(3));
   y1=radius/2;
   x[2]=midx+x1,y[2]=midy-y1;
   x[4]=midx+x1,y[4]=midy+y1;
   x[8]=midx-x1,y[8]=midy+y1;
   x[10]=midx-x1,y[10]=midy-y1;

   x1=radius/2;
   y1=(int)((radius/2)*sqrt(3));
   x[1]=midx+x1,y[1]=midy-y1;
   x[5]=midx+x1,y[5]=midy+y1;
   x[7]=midx-x1,y[7]=midy+y1;
   x[11]=midx-x1,y[11]=midy-y1;
}

int mian()
{
   int gd=DETECT,gm,err,tmp;
   initgraph(&gd,&gm,"")


