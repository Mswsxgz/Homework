#include <stdio.h>
int main (){
	int j,k;
	char a[80];
	gets(a);
	j=0;
	while (a[j]!='\0'){
		if ((a[j]>='A')&&(a[j]<='Z')){
			a[j]=155-a[j];
		}else if ((a[j]>='a')&&(a[j]<='z')){
			a[j]=219-a[j];
		}else a[j]=a[j];
		j++;
	}
	k=j;
	for (j=0;j<k;j++){
		putchar (a[j]);
	}
	return 0;
}
