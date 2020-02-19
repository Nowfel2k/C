#include<stdio.h>

void main() {

    int a, b;
    printf("\nEnter a and b : ");
    scanf("%d %d", &a, &b);

    if(a%b==0) printf("\n%d", a/b);
    else {
        double result;
        result = (double) a / b;
        printf("\n%.2f", result);
    }

    main();
}
