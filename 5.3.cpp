#include <stdio.h>
int main (){
	int i,m,n,max,a,b;
	scanf ("%d,%d",&m,&n);
	if (m>n){
		max=m;
	}else max=n;
	for (i=1;i<max/2;i++){
		if ((m%i==0)&&(n%i==0)){
			a=i;
		};
	}
	b=(m*n)/a;
	printf("m,n的最大公约数为%d\n",a);
	printf("m,n的最小公倍数为%d\n",b);
	return 0;
}
