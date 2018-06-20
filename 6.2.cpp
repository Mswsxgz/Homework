#include <stdio.h>
int main(){
	int i,j,min,t,a[11];
	for (i=1;i<=10;i++){
		scanf("%d",&a[i]);
	}
	for (i=1;i<=9;i++){
		min=i;
		for (j=i+1;j<=10;j++){
			if(a[min]>a[j]){
				min=j;
				t=a[i];
				a[i]=a[min];
				a[min]=t;
			}
		}
	}
	for(i=1;i<=10;i++){
		printf ("%d\n",a[i]);
	}
	return 0;
}
