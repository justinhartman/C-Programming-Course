/* dish_washer.c */

#include <stdio.h>

int main(){
	int dishes;
	dishes=0;
	
	while(dishes < 10){
		printf("done ");
		dishes++;
	}
	
	printf("\nDarn, time to do the dishes again.\n");
	
	return 1;
}