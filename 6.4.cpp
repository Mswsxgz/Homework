#include <stdio.h>
int main (){
	int a[10]={1,2,3,4,5,6,8,9,10};
	int i,j,num,t1,t2,s;
	
	scanf ("%d",&num);
	s=a[8];
	if (num>s){
		a[9]=num;
	}else {
		for (i=0;i<9;i++){
			if (a[i]>num){
				t1=a[i];
				a[i]=num;
				for (j=i+1;j<10;j++){
					t2=a[j];
					a[j]=t1;
					t1=t2;
				}
				break;
			}
		}
	}
	for (i=0;i<10;i++){
		printf ("%d\n",a[i]);
	}
	return 0;
}
