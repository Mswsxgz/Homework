#include <stdio.h>
int main(){
	char a[5]={'*','*','*','*','*'};
	int i,j,k;
	char s=' ';
	for (i=0;i<5;i++){
		printf("\n");
		printf("  ");
		for (j=1;j<=i;j++){
			printf ("%c",s);
		}
		for(k=0;k<5;k++){
				printf("%c",a[k]);
		}		
	}
	printf ("\n");
	return 0;
}
