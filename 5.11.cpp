#include <stdio.h>
#include <math.h>
int main (){
	double h,s;
	int i;
	s=0;
	scanf("%lf",&h);
	for (i=1;i<=10;i++){
		s=s+h*(3/2);
		h=h/2;
	}
	printf ("������%lf m\n",s);
	printf ("��10�η����߶�Ϊ%lf m",h);
	return 0;
}
