/* objective_one.c */

# include <stdio.h>

int count( int [] );

// 'count' a function that counts circles in numbers
int count( int array[5] ) {
	int i, w;
	i = 0;

	for(i = 0; i < 5; i++) {
		switch(array[i]) {
			case 1: case 2: case 3: case 4: case 5: case 7:
			w = w + 0;
			break;

			case 0: case 6: case 9:
			w = w + 1;
			break;

			case 8:
			w = w + 2;
			break;
		}
	}

	return w;
}

int main() {

	int array[] = { 3, 4, 6, 1, 8}; // the numbers in this array will be analyzed
	int w, i;

	printf("Your number is: \n");
	for(i = 0; i < 5; i++) {
		printf("%i", array[i]);
	}
	printf("\n");

	w = count( array );

	printf("and it has %i circles in its digits.\n", w);

	return 1;
}