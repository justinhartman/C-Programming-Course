/* incorrect_addition.c */

#include <stdio.h>

int main() {
	/* previously result was defined as an integer, I have removed this as we need to set a float */ 
	int one=1, two=2, three=3;
 	float four=4.3, five=5.9;
 	/* In the next line we define result as a float value to handle the decimal points */
 	float result;
	
 	result = one + two + three + four + five; /* The problem with the original result value is that we were adding up a mix of integers and floats so this will output the incorrect answer of 16 because result was previously defined as an integer. The correct answer is actually 16.2 but because we were assigning a float point to a normal int it would ignore anything after the decimal. */
 	/* The printf will now output the float value of 16.2 */
 	printf("The result is %f\n",result);
 	return 1;
}