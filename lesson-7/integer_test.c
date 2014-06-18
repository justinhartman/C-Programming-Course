/* integer_test.c */

#include <stdio.h>

int main(){
	int var1, var2, var3;
	printf("Enter three integers (0,1, or 2) separated by spaces: ");
	scanf("%i %i %i", &var1,&var2,&var3);
	
	/* Testing variables */
	if(var1 ==1){
		if(var2 ==1){
			printf("var1 is 1 and var2 is 1\n");
		}else{
			if(var3 ==2){
				printf("var1 is 1, var2 is not 1, and var3 is 2\n");
			}	
		}
		if(var2 ==0){
			printf("var2 is 0\n");
		}
	}
}