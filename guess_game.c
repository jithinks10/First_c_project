// guess_game.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    /* Seed the random number generator (do this once) */
    srand(time(NULL));

    /* Random number between 1 and 100 */
    secret = (rand() % 100) + 1;

    printf("=== Number Guessing Game ===\n");
    printf("I picked a number between 1 and 100. Try to guess it!\n");

    while (1) {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secret) {
            printf("Too low!");
        } else if (guess > secret) {
            printf("Too high!");
        } else {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}
