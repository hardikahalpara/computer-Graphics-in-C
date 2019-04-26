#include<stdio.h>
#include<graphics.h>
void ground();
int x=285,y=400;
void main()
{
int gd=DETECT,gm,i,j;

initgraph(&gd,&gm,NULL);
for(j=0;j<3;j++)
{

for(i=0;i<100;i++)
{
ground();
circle(x,y-i,5);
delay(5);
cleardevice();
}
for(i=0;i<100;i++)
{
ground();
circle(290,300-i,2);
delay(5);
cleardevice();
}
for(i=0;i<200;i++)
{
ground();
circle(290-i,190+i,2);
delay(5);
cleardevice();
}
}
for(i=0;i<200;i++)
{
ground();
delay(1000000);
}

}


void ground()
{
circle(300,250,220);
circle(300,250,125);
rectangle(275,175,325,325);
circle(300,180,2);
circle(295,180,2);
circle(305,180,2);
circle(300,320,2);
circle(295,320,2);
circle(305,320,2);
circle(300,150,5);//wk
circle(300,335,5);//umpire
circle(300,320,2);
circle(305,190,5);//batsmen
circle(300,320,2);
circle(315,315,5);//nonstriker
circle(400,100,5);
circle(150,200,5);
circle(160,300,5);
circle(200,400,5);
circle(275,450,5);
circle(350,450,5);
circle(400,200,5);
circle(350,350,5);
circle(400,400,5);
line(275,200,325,200);
line(275,300,325,300);

circle(x,y,5);//bowler

}
