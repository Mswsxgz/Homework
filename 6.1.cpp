#include <stdio.h>
int main (){
	int i,j,k,a[100];
	for (i=0;i<=99;i++){
		a[i]=i+1;
	}
	for (i=2;i<50;i++){
		for (j=i+1;j<=99;j++){
			if (a[j]%i==0){
				a[j]=0;
			}
		}
	}
	printf ("\n");
	for(i=1;i<=99;i++){
		if (a[i]!=0){
			printf ("%d\n",a[i]);
		}
	}
	return 0;
} 
