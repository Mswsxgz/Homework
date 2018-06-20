#include <stdio.h>
#include <math.h>
int main(){
	int a;
	double x0,x1,xn;
	scanf ("%d",&a);
	x0=a;
	xn=(x0+(a/x0))/2;
	do {
		x0=xn;
		xn=(x0+(a/x0))/2;
	}while (abs(xn-x0)>0.00001);
	printf ("%f",xn);
	return 0;
	
	
}
