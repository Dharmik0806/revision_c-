#include<stdio.h>

int main() {
	
	int num;
	
	printf("number : ");
	scanf("%d",&num);
	
	if(num >= 0) {
		printf("number is : %d",num);
	}else{
		num*=-1;
		printf("number is : %d",num);
	}	
	return 0;
}
