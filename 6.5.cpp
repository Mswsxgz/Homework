#include <stdio.h>
int main (){
	int a[5],i,j,t;
	for (i=0;i<5;i++){
		scanf ("%d",&a[i]);
	}
	for (i=0,j=4;i<=j;i++,j--){
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	for (i=0;i<5;i++){
		printf ("%d  ",a[i]);
	}
	return 0;
}
