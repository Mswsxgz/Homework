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
	printf("m,n�����Լ��Ϊ%d\n",a);
	printf("m,n����С������Ϊ%d\n",b);
	return 0;
}
