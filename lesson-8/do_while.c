/* do_while.c */

#include <stdio.h>

int main(){
	int i=0;
	
	do
	{
		printf("%i ", i++);
	}
	while(i<10);
	
	return 1;
}