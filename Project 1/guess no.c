#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;

    // Print the random number
    // printf("Random number between 1 and 100: %d\n", random_number);
int n,no_of_guess=0;
do{
    printf("guess the no.");
    scanf("%d",&n);
    if(n>random_number)
        {
            printf("Guess lower number !\n");
        }
    else if (n<random_number)
        {
            printf("Guess Higher number !\n");
        }
    else printf("congrats !\n");
    no_of_guess++;
    
}while(n!=random_number);

printf("You guessed the no. in %d guesses",no_of_guess);
    return 0;
}
