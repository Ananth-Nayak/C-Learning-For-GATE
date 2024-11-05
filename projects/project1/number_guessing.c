#include <stdio.h>
#include <stdlib.h> // to get rand() function
#include <time.h>

int main() {
  int user_input,guesses = 0;
  srand(time(0));
  int random_num = (rand() % 100) + 1;      // random number b/w 1 to 100

  while(1){
    printf("Guess The Number: ");
    scanf("%d",&user_input);

    if(user_input == random_num){
      printf("Congratulations!!!\nYou got it right... The number was %d.\n",random_num);
      guesses++;
      break;
    }
    else if(user_input > random_num){
      printf("You Entered the higher number....\n");
    }
    else{
      printf("You Entered the lower number....\n");
    }
    guesses++;
  }

  printf("\nYou guessed within %d guesses\n\n",guesses);

return 0;
}