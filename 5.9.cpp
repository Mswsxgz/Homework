#include <stdio.h>
int main(){
	int n,i,a;
	printf ("1 its factors is 1\n");
	n=2;
	while (n<1000){
		a=0;
		for (i=1;i<=n/2;i++){
			if (n%i==0){
				a=a+i;
			}
		}
		if (a==n){
			printf ("%d its factors are 1",n);
			for (i=2;i<=n/2;i++){
				if(n%i==0){
					printf (",%d",i);
				} 
			}
			printf ("\n");
		}
		n++;
	}
	return 0;
} 
