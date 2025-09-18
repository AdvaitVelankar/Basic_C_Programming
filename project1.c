#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int guessed_number, no_of_guess = 0, random_number = ((rand() % 100) + 1);
    do
    {

        printf("Guess the number! ");
        scanf("%d", &guessed_number);
        if (guessed_number > random_number)
            printf("Lower the number\n");
        else if (guessed_number < random_number)
            printf("Higher the number\n");
        else
            printf("Congrats!!");
        no_of_guess++;
    } while (guessed_number != random_number);
    printf("You guessed the number in %d guesses", no_of_guess);
    return 0;
}