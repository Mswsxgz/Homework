#include <stdio.h>
int main(){
	int num,n;
	int a,b,c,d,e;
	scanf ("%d",&num);
	a=num/10000;
	b=(num-a*10000)/1000;
	c=(num-a*10000-b*1000)/100;
	d=(num-a*10000-b*1000-c*100)/10;
	e=num-a*10000-b*1000-c*100-d*10;
	if (a==0&&b==0&&c==0&&d==0){
		printf("位数为1\n");
		printf("%d\n",e); 
		printf("%d",e);
	}else if (a==0&&b==0&&c==0){
		printf("位数为2\n");
		printf("%d,%d\n",d,e);
		n=e*10+d;
		printf("%d",n);
	}else if (a==0&&b==0){
		printf("位数为3\n");
		printf("%d,%d,%d\n",c,d,e);
		n=e*100+d*10+c;
		printf("%d",n);
	}else if (a==0){
		printf("位数为4\n");
		printf("%d,%d,%d,%d\n",b,c,d,e);
		n=e*1000+d*100+c*10+b;
		printf("%d",n);
	}else {
		printf("位数为5\n");
		printf("%d,%d,%d,%d,%d\n",a,b,c,d,e);
		n=e*10000+d*1000+c*100+b*10+a;
		printf("%d",n); 
	}

	return 0;
}

