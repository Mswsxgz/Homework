#include <stdio.h>
int main (){
	char a[50],b[100];
	int i,j;
	i=0; j=0;
	scanf ("%s",a);
	scanf ("%s",b);
	while (a[i]!='\0')
		i++;
		while (b[j]!='\0')
			a[i++]=b[j++];
		
		a[i]='\0';
	
	printf ("%s",a);
	return 0;
}
