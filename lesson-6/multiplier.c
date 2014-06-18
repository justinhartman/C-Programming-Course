/* multiplier.c */

#include <stdio.h>

int main(){
	float num1,num2,result;
	
	printf("Please enter two numbers separated by a space: ");
	
	scanf("%f %f",&num1,&num2);
	
	result=num1*num2;
	printf("The result is %f\n",result);
	return 1;
}