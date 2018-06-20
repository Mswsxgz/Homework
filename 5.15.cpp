#include <stdio.h>
#include <math.h>
int main (){
	double x0,x1,x2,fx,gx,hx;
	do {
		scanf ("%lf,%lf",&x1,&x2);
		gx=x1*((2*x1-4)*x1+3)-6;
		hx=x2*((2*x2-4)*x2+3)-6;
	}while (hx*gx>0);
	do{
		x0=(x1+x2)/2;
		fx=x0*((2*x0-4)*x0+3)-6;
		if((fx*gx)<0){
			x2=x0;
			hx=fx;
		}else {
			x1=x0;
			gx=fx;
		}
	}while (abs(fx)>=1e-5);
	printf("%lf",x0);
	return 0;
}
