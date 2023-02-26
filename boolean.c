#include<stdio.h>
#include<stdbool.h>


int main() {
	
	int result = (4 > 5);
	int result22 = (10 > 5);
	
	bool ans = (5 == 5);
	bool mark=80;
	
	printf("Answer : %d \n",result);
	printf("Answer 2 : %d \n",result22);
	printf("Answer 3 : %d \n",ans);
	
	if(mark >= 50 ) {
		printf("\n\nMARK : %d \n",mark);
	}else{
			printf("MARK : %d \n",mark);
	}
	
	
	return 0;
}
