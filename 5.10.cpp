#include <stdio.h>
int main(){
	int i,t;
	double a,b,Sn,an;
	a=1;
	b=2;
	Sn=0;
	for (i=1;i<=20;i++){
		an=b/a;
		Sn=Sn+an;
		t=b;
		b=a;
		a=t;
		b=a+b;
	}
	printf ("%lf",Sn);
	return 0;
	
}
