#include <stdio.h>
#include <math.h>
int main (){
	int Sn,i,an,a,b;
	scanf ("%d,%d",&a,&b);
	an=a;
	Sn=0;
	for (i=1;i<=b;i++){
		Sn=Sn+an;
		an=an+a*pow(10,i);
	}
	printf ("%d",Sn);
	
	return 0;
}
