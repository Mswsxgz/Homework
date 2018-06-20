#include <stdio.h>
int main(){
	int grade;
	printf("Please input grade:");
	scanf ("&d",&grade);
	if (grade>=90&&grade<=100){
		printf("A");
	}else if (grade<=89&&grade>=80){
		printf("B");
	}else if (grade<=79&&grade>=70){
		printf("C");
	}else if (grade<=69&&grade>=60){
		printf("D");
	}else if (grade<=59&&grade>=0){
		printf("E");
	}else printf("Your grade is wrong");
	return 0;
}
