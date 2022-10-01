#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
int maxx,maxy,midx,midy;
void trans();
int main(){
	int ch;
	int gd=DETECT,gm;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,(char*)"");
	trans();
	
}
void trans(){
	int x,y,z,x1,x2,y1,y2;
	midx=200;
	midy=200;
	bar3d(midx+50,midy-100,midx+100,midy-50,20,1);
	printf("enter translation factor x and y:");
	scanf("%d%d",&x,&y);
	printf("After translation:");
	bar3d(midx+x+50,midy-(y+100),midx+x+100,midy-(y+50),20,1);
	getch();
	closegraph();
}
