#include<stdio.h>

int tiger=9, lion=8, rabbit=900, goat=600, elephant=90;
int grass=20, banana=16, gram=30, rabbit_price=600, goat_price=900;
int tiger_cost=0, lion_cost=0, rabbit_cost=0, goat_cost=0, elephant_cost=0;

void processDataForNdays(int n) {

    for(int i=0; i<n; i++) {

        tiger_cost += (tiger * ((3 * rabbit_price) + (2 * goat_price))); rabbit -= 3; goat -= 2;
        lion_cost += (lion * ((1 * rabbit_price) + (3 * goat_price))); rabbit--; goat -= 3;

        rabbit_cost += (rabbit * (3 * grass));
        goat_cost += (goat * (6 * grass + 6 * gram));
        elephant_cost += (elephant * (6 * banana + 12 * grass));


    }

}



int main() {

    int n;
    printf("Enter the number of days : ");
    scanf("%d", &n);
    if(n>=1) {
        processDataForNdays(n);

        (n==1)?printf("\nFor %d day\n", n):printf("\nFor %d days\n", n);

        printf("\nCost for Tiger : %d", tiger_cost);
        printf("\nCost for Lion : %d", lion_cost);
        printf("\nCost for Rabbit : %d", rabbit_cost);
        printf("\nCost for Goat : %d", goat_cost);
        printf("\nCost for Elephant : %d", elephant_cost);
        printf("\n\nTotaling upto %d Rupees", tiger_cost + lion_cost + rabbit_cost + goat_cost + elephant_cost);

        printf("\n\nNumber of goats remaining : %d", goat);
        printf("\nNumber of rabbits remaining : %d", rabbit);

    } else {
        printf("Invalid Input!");
        main();
    }

    return 0;

}
