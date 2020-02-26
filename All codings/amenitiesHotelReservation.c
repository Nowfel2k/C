#include<stdio.h>

// GLOBAL VARIABLES
char amenities[4][5] = {"SPA", "POOL", "GYM", "WIFI"};
int choiceList[4];


void selectChoice() {

    int choice = 0, n = 0;

    printf("\nHow many amenities would you like to have?\t");
    scanf("%d", &choice);

    // AMENITITIES ONLY BETWEEN 1 AND 4
    if(choice >= 1 && choice <= 4) {

        printf("\nPlease enter %d amenities : \n", choice);

        // i=1 for a specific reason, 0 and 1 acts as boolean later
        for(int i=1; i<=choice; i++) {
                scanf("%d", &n);
                if(n >= 1 && n <= 4) choiceList[n-1] = i;
                else {
                    printf("Invalid\n");
                    selectChoice();
                }
        }

    } else {
        printf("\nInvalid Input\n");
        selectChoice();

    }


}



int main() {

    printf("\n1- SPA\n2- POOL\n3- GYM\n4- WIFI\n\n");


    selectChoice();

    printf("\nYou have chosen : \n");
    for(int i=0; i<4; i++) {

        if(choiceList[i]!=0) {
                //printf("\nchoice list %d is NOT ZERO", i);
                for(int j=0; amenities[i][j]!='\0'; j++) {
                        printf("%c", amenities[i][j] );
                }
                printf("\n");
        }

    }

    return 0;
}
