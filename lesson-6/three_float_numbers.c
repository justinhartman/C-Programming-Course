/* three_float_numbers.c */

#include <stdio.h>

int main(){
	/* set the variables up */
	float num1,num2,num3;
	
	/* ask the user for some input */
	printf("Please enter 3 numbers with decimal points separated by spaces: ");
	
	/* scan and set the variables using the address operator */
	scanf("%f %f %f",&num1,&num2,&num3);
	
	/* print the results as right justified */
	printf("%11.4f\n %10.4f\n %10.4f\n",num1, num2, num3);
	return 1;
}