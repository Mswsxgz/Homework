#include <stdio.h>
int main (){
	int i,r;
	char a[30],b[30];
	gets (a);
	gets (b);
	i=0;
	while ((a[i]==b[i])&&(a[i]!='\0')) {
	i++;
	if ((a[i]=='\0')&&(b[i]=='\0')) r=0;
	else r=a[i]-b[i];
	}
	printf ("%d",r);
	return 0;
}
