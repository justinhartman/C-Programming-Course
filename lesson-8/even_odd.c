/* even_odd.c */

#include <stdio.h>

int main(){
	int var=20,ans;
	
	while (var < 26){
		ans = var % 2;
		if(ans == 1){
			printf("%i is odd\n",var);
		} else {
			printf("%i is even\n",var);
		}
		var++;
	}
	return 1;
}