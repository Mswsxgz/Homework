#include <stdio.h>
int main (){
	int n,i,a,Sn;
	scanf ("%d",&n);
	Sn=1;
	a=1;
	for (i=2;i<=n;i++){
		a=a*i;
		Sn=Sn+a;
	}
	printf ("%d",Sn);
	return 0;
}
