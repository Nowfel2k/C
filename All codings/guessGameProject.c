#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct fullHand {

    int index;
    int secretNumber;
    int guessList[20];
    int attemptCount;
    bool result;

} Hand;

// Decides the end result
bool gameWon = false;

int getSecretNumber(int n) {

    // Logic to get the secret number based on digit_count provided as n


    return 1234;
}

void calculateCowsAndBulls(int x, int y) {

    // int x is myGuess and y is secretNumber
    printf("\nBulls: 1  Cows: 0\n");


}

void guessingTime(int n) {

    // Calculate length of n
    int len = 0, test = n;
    for( ; test!=0 ; len++) test /= 10;

    // Guess game
    int myGuess;
    bool continueGuess = true;

    printf("\nEnter 0 to quit the game.");

    while(continueGuess) {

        printf("\nWhat is your guess : ");
        scanf("%d", &myGuess);

        // To quit the game
        if(myGuess == 0) break;

        int lenOfGuess = 0, temp = n;
        for( ; temp!=0 ; lenOfGuess++) temp /= 10;

        if(len != lenOfGuess) {
            printf("\nGuess must have length of %d, try again.", len);
            break;
        }

        if(myGuess == n) {
            gameWon = true;
            break;
        }

        // Calculate Cows and Bulls and Display THEM!
        calculateCowsAndBulls(myGuess, n);
        gameWon = false;
    }
}

int main() {

    int digit_count;
    printf("\n***Welcome to the Bulls and Cows Game***");
    printf("\nEnter the digit count that you desire : ");
    scanf("%d", &digit_count);

    int secret_number;

    // Logic to get the secret number -> goes to function
    secret_number = getSecretNumber(digit_count);

    // Guesses repeatedly until win/lose
    guessingTime(secret_number);

    if(gameWon)
        printf("\nYou Win!");
    else
        printf("\nYou Lose!");


    char retry[5];
    printf("\nDo you want to play one more time (yes/no)?  : ");
    scanf("%s", retry);

    if(!strcmp(retry, "yes"))
        main();
    else
        exit(0);

    return 0;
}
