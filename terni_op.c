#include<stdio.h>

int main() {
	
	int num;
	printf("number : ");
	scanf("%d",&num);
	
	int ans =(num < 0) ? num*-1 : num;
	int ans =(num < 0) ? -num : num;

	
	printf("ans : %d",ans);
	return 0;
}

