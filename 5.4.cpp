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
	printf ("��ĸ��%d��,�ո���%d��,������%d��,�����ַ��ĸ���Ϊ%d\n",i,j,k,l);
	return 0;
}
