/* pow_calculation.c */

#include <stdio.h>
#include "math.h"

int main() {
	/* we're dealing with a decimal value so we set a float variable of 5.58 */
	float x=5.58;
	/* assign an integer to y so we can calculate the power of value */
	int y=10;
	/* set up the float value to store our calculated value */
	float z;
	
	/* by including math.h we are able to use the pow() function for calculating the power of a value. Here we run the equation of 5.58 to the power of 10 */
	z = pow(x,y);
	/* output the result to terminal */
	printf("Calculation of 5.58 to power of 10 = %f\n",z);
 	return 1;
}