#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() 
{
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1; 
    printf("Guess the number (between 1 and 100):\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess < number) {
            printf("Too low!\n");
        } else if (guess > number) {
            printf("Too high!\n");
        } else {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
        }
    } while (guess != number);
    return 0;
}
