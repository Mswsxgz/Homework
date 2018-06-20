#include <stdio.h>
#include <math.h>
int main (){
	int num,a,b,c,i;
	for (a=1;a<=9;a++){
		for (b=1;b<=9;b++){
			for (c=1;c<=9;c++){
				num=100*a+10*b+c;
				if (num==pow(a,3)+pow(b,3)+pow(c,3)){
					printf ("%d是水仙花数",num);
				}
			}
		}
	}
	return 0;
}
