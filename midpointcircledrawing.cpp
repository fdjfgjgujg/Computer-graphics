#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main(){
	int r,x,y, gd=DETECT,gm;
	float d;
	initgraph(&gd,&gm,(char*)"");
	printf("Enter the value of radius:");
	scanf("%d",&r);
	x=0;
	y=r;
	d=1-r;
	do{
		putpixel(350+x,350+y,BLUE);
		putpixel(350+x,350-y,RED);
		putpixel(350+y,350-x,YELLOW);
		putpixel(350-y,350-x,WHITE);
		putpixel(350-x,350-y,BLUE);
		putpixel(350-x,350+y,YELLOW);
		putpixel(350-y,350+x,RED);
		putpixel(350+y,350+x,WHITE);
		if(d<0){
			x=x+1;
			y=y;
			d=d+(2*x)+2;
		}
		else{
		
		x=x+1;
		y=y-1;
		d=d+2*(x-y)+1;
		
	}}
	 while(x<y);
	 getch();
	 closegraph();
}

