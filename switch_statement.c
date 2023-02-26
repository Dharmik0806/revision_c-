#include<stdio.h>

int main() {
	
	int num;
	
	printf("number : ");
	scanf("%d",&num);
	
	switch(num) {
		case 1 : {
			printf("number is 1\n");
			break;
		}
		
		case 2 : {
			printf("number is 2\n");
			break;
		}
		
		case 3 : {
			printf("number is 3 \n");
			break;
		}
		
		case 4 : {
			printf("number is 4\n");
			break;
		}
		
		case 5 : {
			printf("number is 5\n");
			break;
		}
		
		default : {
			printf("sorry not this number :");
			break;
		}
	}
	
	return 0;
}
