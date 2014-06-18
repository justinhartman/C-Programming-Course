/* objective_one.c */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
 
#define lower_limit 1
#define upper_limit 10
 
int main(){
  int number, guess;
  int chances = 0;
 
  srand( time( 0 ) );
  number = lower_limit + rand() % (upper_limit - lower_limit + 1);
 
  printf( "Guess the number between %d and %d: ", lower_limit, upper_limit );
  while( scanf( "%d", &guess ) == 1 ){
    if( number == guess ){
      printf( "You guessed correctly!\n" );
      break;
    }
    if (chances == 4) {
       printf( "Sorry you ran out of chances, game over.");
       break;
    }
    chances = chances + 1;
    printf( "Your guess was too %s.\nTry again: ", number < guess ? "high" : "low" );
  }
  return 0;
}