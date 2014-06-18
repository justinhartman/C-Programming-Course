/* objective_one.c */

#include <stdio.h>
#include <string.h>

int main(){
	char string1[10], string2[10];
	int compareLimit = 10;

	printf("Type in your first string: ");
	scanf("%s", &string1[10]);

	printf("Type in your second string: ");
	scanf("%s", &string2[10]);

	strcpy(string1, &string1[10]);
	strcpy(string2, &string2[10]);
	int result = strncmp(string1, string2, compareLimit);

	if(result > 0)
		printf("The strings are not the same\n");
	else if(result < 0)
		printf("The strings are not the same\n");
	else if (result == 0)
		printf("The strings are the same\n");
}