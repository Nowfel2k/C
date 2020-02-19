#include<stdio.h>

void checkPrime(int n){
    int flag = 0;
    for (int i = 2; i <= n / 2; ++i) {
        // condition for non-prime
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (n == 1) {
        printf("| 1 is neither prime nor composite. |");
    }
    else {
        if (flag == 0)
            printf("| %d is a prime number. |", n);
        else
            printf("| %d is not a prime number. |", n);
    }

}


int main() {

    int a[3][3] = {1, 5, 6, 7, 3, 4, 9, 2, 8};

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            checkPrime(a[i][j]);
        }
        printf("\n");
    }

    return 0;

}
