/* math.c */

#include <stdio.h>

int main(){
	int a=1, b=2, c, d;
	float x=1.1, y=2.2, z;
	
	c = a+b;
	z = (x+y)*b;
	d = b/x;
	
	printf("a + b = %i\n",c);
	printf("(x+y) * b = %f\n",z);
	printf("b / x = %i\n",d);
	
	return 1;
}