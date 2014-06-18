/* letter_grade.c */

#include <stdio.h>

int main(){
	int var1;
	
	// print out a prompt to the user
	printf("Enter a number between 0 and 100 to get the letter grade based on your score: \n");
	scanf("%i", &var1);
	
	// Need to test if the number is between 0 and 100
	if((var1 >=0) && (var1 <=100)){
		// Lets do some testing of the variable
		if((var1 >=0) && (var1 <=20)){
			printf("Your grade of %i percent is an: F \n", var1);
		} else if((var1 >20) && (var1 <=40)){
			printf("Your grade of %i percent is an: E \n", var1);
		} else if((var1 >40) && (var1 <=60)){
			printf("Your grade of %i percent is a: D \n", var1);
		} else if((var1 >60) && (var1 <=70)){
			printf("Your grade of %i percent is a: C \n", var1);
		} else if((var1 >70) && (var1 <=80)){
			printf("Your grade of %i percent is a: B \n", var1);
		} else if((var1 >80) && (var1 <=90)){
			printf("Your grade of %i percent is an: A \n", var1);
		} else if((var1 >90) && (var1 <=100)){
			printf("Your grade of %i percent is an: A+ \n", var1);
		}
	} else {
		printf("You did not enter a number between 0 and 100. Please try again.\n");
	}
}