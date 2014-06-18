/* get_an_int.c */

#include <stdio.h>
#include <stdlib.h>

int main(){
	char a;
	int i=0;
	
	printf("Enter a number between 0 and 9: ");
	a = getchar();
	printf("%c\n",a);
	
	i = atoi(&a);
	printf("%i\n",i);
	
	return 1;
}