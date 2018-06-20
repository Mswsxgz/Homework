#include <stdio.h>
int main (){
	char c;
	int i,j,k,l;
	i=0;
	j=0;
	k=0;
	l=0;
	while ((c=getchar())!='\n'){
		if ((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
			i++;
		}else if (c==' '){
			j++;
		}else if (c>='1'&&c<='9'){
			k++; 
		}else l++;
	printf ("\n");
	}
	printf ("字母有%d个,空格有%d个,数字有%d个,其他字符的个数为%d\n",i,j,k,l);
	return 0;
}
