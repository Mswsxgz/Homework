#include <stdio.h>
int main (){
	int i,j,m,n,o,p,q;
	char a[3][80];
	m=0; n=0; o=0; p=0; q=0;
	for(i=0;i<3;i++){
		gets (a[i]);
		for (j=0;j<80;j++){
			if (a[i][j]>='A'&&a[i][j]<='Z'){
				m++;
			}else if (a[i][j]>='a'&&a[i][j]<='z'){
				n++;
			}else if (a[i][j]>='0'&&a[i][j]<='9'){
				o++;
			}else if (a[i][j]==' '){
				p++;
			}else q++;
		}
	}
	printf ("大写字母有%d个,小写字母有%d个，数字有%d个，空格有%d个，其他字符有%d个",m,n,o,p,q);
	return 0;
}
