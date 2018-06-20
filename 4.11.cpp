#include <stdio.h>
int main (){
	int a[4];
	int i,j,t;
	for (i=0;i<4;i++){
		scanf ("%d",&a[i]);
	}
	printf ("\n");
	for (j=0;j<3;j++){
		for (i=0;i<3-j;i++){
			if (a[i]>a[i+1]){
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	for (i=0;i<4;i++){
		printf("%d",a[i]);
	}
	printf ("\n");
	return 0;
}
