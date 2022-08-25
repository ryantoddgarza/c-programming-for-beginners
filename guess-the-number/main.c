#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int tries = 5;
  int guess = 0;

  time_t t;
  srand((unsigned) time(&t));
  int random_number = rand() % 21;

  printf("I have chosen a number between 0 and 20. Can you guess?\n");

  while (tries > 0) {
    printf("\nYou have %d %s left.", tries, tries == 1 ? "try" : "tries");
    printf("\nEnter your guess: ");
    scanf("%i", &guess);

    if (guess == random_number) {
      printf("\nYou guessed correct!\n");
      return 0;
    }

    if (guess < 0 || guess > 20) {
      printf("Guess a number between 0 and 20\n");
    } else if (guess > random_number) {
      printf("Sorry, %d is wrong. My number is less than that.\n", guess);
      tries--;
    } else if (guess < random_number) {
      printf("Sorry, %d is wrong. My number is greater than that.\n", guess);
      tries--;
    }
  }

  printf("\nGame over.\n");

  return 0;
}
