#include <stdio.h>
#include <math.h>
int main (){
	int x,y,h;
	int a,b,c,d;
	printf ("����һ�����꣺");
	scanf ("%d,%d",&x,&y);
	a=pow(x-2,2)+pow(y-2,2);
	b=pow(x-2,2)+pow(y+2,2);
	c=pow(x+2,2)+pow(y-2,2);
	d=pow(x+2,2)+pow(y+2,2);
	if (a<=4||b<=4||c<=4||d<=4){
		h=10;
	}else h=0;
	printf ("�������µĸ߶�Ϊ%d��",h);
	
	return 0;
	 
}
