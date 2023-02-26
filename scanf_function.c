#include<stdio.h>

int main() {
	
	int age ;
	char div;
	float mark;
	char name[50];
	
	
//	formate specifire matra printf ma use thay 

	printf("Please Enter Age :");
	scanf("%d",&age);
	
//	getchar();    
//				OR
//	scanf(" %c",&div);  //one space 

	getchar();    
	printf("Please Enter Div :");
	scanf("%c",&div);
	
	printf("Please Enter Mark :");
	scanf("%f",&mark);
	
	printf("Please Enter Name :");
	scanf("%s",name);    // string ma address op(&) ni jarur raheti nathi
//	string no need to address op
		                   
	
	printf("Name : %s\n",name);
	printf("Age : %d\n",age);
	printf("Mark : %f\n",mark);
	printf("Div : %c\n",div);	
	return 0;
}
