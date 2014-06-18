/* hollow_rectangle.c */

#include <stdio.h>

int main(){
	// We need to set the h variable to 1 over here for the while loop later on
	int h=1,w,height,width;
	
	printf("Enter a height between 1 and 40: ");
	scanf("%i",&height);
	
	printf("Enter a width between 1 and 40: ");
	scanf("%i",&width);
		
	// Lets check to see if the user inputted a number not less than 1 or greater than 40
	if(height!=0 && height<=40 && width!=0 && width<=40){
		// Lets run a while loop until the program hits the users original height value
		while(h<=height){
			// Run the for loop
			for(w=1;w<=width;w++){
				// Check if this is the first or the last row
				if(h==1 || h==height)
				{
					// It is first or last so print out all the #'s as per the width loop
					printf("#");
				}
				//  Now we check if this is the first or the last column in the row width
				else if(w==1 || w==width)
				{
					// Great, now we just print out one # so we can create the border for the hollow rectangle on the left and right sides
					printf("#");
				}
				// Everything else gets caught by the following
				else 
				{
					// Lets print out blank spaces to make the rectangle hollow
					printf(" ");
				}
			}
			// Print out a line break so we can create the next row
			printf("\n");
			// Don't forget to increment the h variable otherwise we end up in an infinite loop
			h++;
		}
	} else {
		// You're a douche and can't follow instructions...!
		printf("You did not enter a number between 1 and 40, please try again.\n");
	}
	
	return 1;
}