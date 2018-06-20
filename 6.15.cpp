#include <stdio.h>
#include <string.h>
int main (){
	char a[30],b[30];
	int i;
	scanf ("%s",b);
	for (i=0;i<=strlen(b);i++){
		a[i]=b[i];
	}
	printf ("%s",a);
	return 0;
}
