#include <stdio.h>
int main(){
	float x;
	int y;
	printf("enter x:");
	scanf("%f",&x);
	if (x!=0){
		if (x>0){
			y=1;
		}else y=-1;
	}else y=0;
	printf ("y=%d",y);
	return 0;
}
