#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL)); // Seed the random number generator

  int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
  int guess; // Store the user's guess
  int attempts = 0; // Keep track of the number of attempts

  printf("Welcome to the number guessing game!\n");
  printf("I have chosen a secret number between 1 and 100.\n");
  printf("You have 5 attempts to guess the number.\n");

  do {
    attempts++;
    printf("Enter your guess: ");
    scanf("%d", &guess); // Get the user's guess

    if (guess < secretNumber) {
      printf("Your guess is too low. Try again.\n");
    } else if (guess > secretNumber) {
      printf("Your guess is too high. Try again.\n");
    }
  } while (guess != secretNumber && attempts < 5);

  if (attempts == 5) {
    printf("\nYou Lose!! \nYou have run out of attempts. The secret number is %d.\n", secretNumber);
  } else {
    printf("Congratulations! You guessed the secret number in %d attempts!\n", attempts);
  }

  return 0;
}