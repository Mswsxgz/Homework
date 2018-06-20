#include <stdio.h>
#include <math.h>
int main (){
	double k,h,i,j,num;
	h=0;
	i=0;
	j=0;
	for (k=1;k<=100;k++){
		h=h+k;
	}
	for (k=1;k<=50;k++){
		i=i+pow(k,2);
	}
	for (k=1;k<=10;k++){
		j=j+pow(k,-1);
	}
	num=h+i+j;
	printf ("%lf",num);
	
	return 0;
}
