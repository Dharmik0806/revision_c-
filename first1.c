#include<stdio.h>
int main() {
	
	int a=5,b , c=9;
	a=200;
	const float R=111.76;  // const variable declare and initialized same time
	const int K=315;  
	
	enum month{	Sjan , feb , march , april , may , june , july , august , september , oct , nove ,december};
	enum month mahina=april;
	
	if(mahina == 0) {
		printf("january");
	}else if(mahina == 1) {
		printf("february");
	}else if(mahina == 2) {
		printf("march");
	}else if(mahina == 3) {
		printf("april");
	}else if(mahina == 4) {
		printf("may");
	}else if(mahina == 5) {
		printf("june");
	}

	printf("\n\ndecember  %d\n",december);
//	k=1000;  not change const variable value
	printf("hello world :\n");
	printf("a is : => %d \n" ,a);
	printf("const number is : => %f \n" ,R);
	printf("const number 2 is : => %d \n" ,K);

	
	return 0;
}
