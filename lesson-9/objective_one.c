/* objective_one.c */

#include <stdio.h>

int main() {

	int i; // initializing index variable
	int array[] = {'a', 0, 0, 0, 0}; // initializing array
	int a, b, c = 0; // initializing sorting variables


	// get user input
	printf("Please enter 5 positive integers: \n");
	for(i = 0; i < 5; i++) {

		// break loop if number is negative
		if(array[i-1] < 0) {
			printf("The number %i is negative, we have to stop.\n", array[i-1]);
			break;
		}else {
			scanf("%i", &array[i]);
		}
	}

	/* ascending sort */
	for(a = 0; a < 5; a++) {

		for(b = a; b < 5; b++) {

			if(array[a] > array[b]) {
				c = array[a];
				array[a] = array[b];
				array[b] = c;
			}
		}
	}

	/* show largest 2 integers */
	printf("- The largest number you entered was %i\n", array[4]);
	printf("- The 2nd largest number you entered was %i\n", array[3]);

	return 1;

}