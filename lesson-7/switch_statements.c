/* switch_statements.c */

#include <stdio.h>

int main(){
	int var;
	int sum;
	
	// Print out a menu
	printf("(1) Say \"hello\"\n");
	printf("(2) Add 2 + 2\n");
	printf("(3) Say \"OST Rocks\"\n");
	printf("(4) Do all of the above\n");
	
	// print out a prompt to the user
	printf("Enter a number between 1 and 4: ");
	scanf("%i", &var);
	
	// Declaring sum outside of the switch so I can reuse the variable in switch 2 and 4.
	sum = 2+2;
	
	// Lets do some testing of the variable
	switch(var){
		case 1:
			// (1) Say "hello"
			printf("hello\n");
		break;
		case 2:
			// (2) Add 2 + 2
			printf("%i\n", sum);
		break;
		case 3:
			// (3) Say "OST Rocks"
			printf("OST Rocks\n");
		break;
		case 4:
			// (4) Do all of the above
			printf("hello\n");
			printf("%i\n", sum);
			printf("OST Rocks\n");
		break;
		default:
			printf("You did not select a number between 1 and 4. Please try again.\n");
		break;
	}
}