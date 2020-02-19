#include<stdio.h>

int main() {

    int a, b, c;
    char add = '+';
    char sub = '-';
    char div = '/';
    char mul = '*';

    char ch1, ch2;
    printf("\n\nInput : ");
    scanf("%d %c %d %c %d", &a, &ch1, &b, &ch2, &c);
    int result;

    if(ch1 == add && ch2 == add) result = a + b + c;
    else if(ch1 == add && ch2 == sub) result = a + b - c;
    else if(ch1 == add && ch2 == mul) result = a + b * c;
    else if(ch1 == add && ch2 == div) result = a + b / c;

    else if(ch1 == sub && ch2 == add) result = a - b + c;
    else if(ch1 == sub && ch2 == sub) result = a - b - c;
    else if(ch1 == sub && ch2 == mul) result = a - b * c;
    else if(ch1 == sub && ch2 == div) result = a - b / c;

    else if(ch1 == mul && ch2 == add) result = a * b + c;
    else if(ch1 == mul && ch2 == sub) result = a * b - c;
    else if(ch1 == mul && ch2 == mul) result = a * b * c;
    else if(ch1 == mul && ch2 == div) result = a * b / c;

    else if(ch1 == div && ch2 == add) result = a - b + c;
    else if(ch1 == div && ch2 == sub) result = a - b - c;
    else if(ch1 == div && ch2 == mul) result = a - b * c;
    else if(ch1 == div && ch2 == div) result = a - b / c;

    else { printf("Invalid input, try again"); main(); }

    printf("\n%d %c %d %c %d   =   %d\n", a, ch1, b, ch2, c, result);

    main();
    return 0;
}
