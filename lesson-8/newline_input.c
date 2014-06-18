/* newline_input.c */

#include <stdio.h>

int main(){
	// Set the char up
	char a;
	// Define an integer so we can see how many characters are in the input
	int count;
	
	// Run a while loop to get all the characters from the input
	while(a=getchar()){
		if(a != '\n'){
			printf("%c",a);
		}
		// Increment the count value
		count++;
	}
	// New line just to keep it clean and tidy
	printf("\n");

	return 1;
}