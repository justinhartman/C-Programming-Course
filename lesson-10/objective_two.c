/* objective_two.c */

# include <stdio.h>

int main() {

	// declaring variables
	int size = 10;
	int array[size], i, sum;
	int a, b, c = 0;
	float average;

	// 1) Prompt user for array size
	printf("How many numbers do you want to average?\n");
	scanf("%i", &size);

	// Checking 'size' is <= 10
	while(size > 10 || size <= 1) {
		printf("Sorry, the number you entered is invalid, it MUST be between 2 and 10\n");
		printf("Again, How many numbers do you want to average?\n");
		scanf("%i", &size);
	}
	printf("Ok. so you want to average %i numbers...\n", size);

	// 2) Prompt each number to average
	printf("Please enter those numbers to average, one by one\n", size);
	for(i = 0; i < size; i++) {
		scanf("%i", &array[i]);
	}

	// 3) Sort array ascending
	for(a = 0; a < size; a++) {

		for(b = a; b < size; b++) {

			if(array[a] > array[b]) {
				c = array[a];
				array[a] = array[b];
				array[b] = c;
			}
		}
	}

	i = 0;
	printf("Ok. so you want to average (ordered from MIN to MAX value): \n");
	for(i = 0; i < size; i++) {
		printf("%i ", array[i]);
	}
	printf("\n");

	// 4) Calculate the average
	// Get the numbers' sum
	sum = 0;
	for(i = 0; i < size; i++) {
		sum = sum + array[i];
	}
	printf("The sum of your numbers is %i...\n", sum);
	printf("divided by %i means...\n", size);

	// Calculate the average
	average = sum/(float)size;
	printf("The AVERAGE of your numbers is %.2f\n", average);

	return 1;
}