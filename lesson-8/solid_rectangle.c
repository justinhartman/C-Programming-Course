/* solid_rectangle.c */

#include <stdio.h>

int main(){
	int h,w,height,width;
	
	printf("Enter a height between 1 and 40: ");
	scanf("%i",&height);
	
	printf("Enter a width between 1 and 40: ");
	scanf("%i",&width);
	
	// Lets check to see if the user inputted a number not less than 1 or greater than 40
	if(height!=0 && height<=40 && width!=0 && width<=40){
		// Run the for loop for the height value
		for(h=1;h<=height;h++){
			// Within the for loop we now run another loop to check the width of the rows
			for(w=1;w<=width;w++){
				// Print some #'s out to make a solid block
				printf("#");
			}
			// New line break so we can actually make a block - otherwise it would just be #'s one after another
			printf("\n");
		}
	} else {
		// You're a douche and can't follow instructions...!
		printf("You did not enter a number between 1 and 40, please try again.\n");
	}
	
	return 1;
}
