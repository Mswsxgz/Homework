#include <stdio.h>
int main (){
	int max0,max1,s,i,j,k;
	int a[5][5];
	for (i=0;i<4;i++){
		for (j=0;
		j<5;j++){
			scanf ("%d",&a[i][j]);
		}
	}
	for (i=0;i<5;i++){
		max0=a[i][0];
		max1=0;
		for (j=0;j<5;j++){
			if (a[i][j]>max0){
				max0=a[i][j];
				max1=j;
			}
		}
	}
	s=1;
	for (k=0;k<5;k++){
		if (max0>a[k][max1]){
			s=0;
			continue;
		}
		if (s){
			printf("a[%d][%d]=%d\n",i,max1,max0);
			break;
		}
	}
	if (!s){
		printf ("ÎÞ°°µã");
	}
	return 0;
}
