#include<stdio.h>
#include<stdbool.h>

int main()
{
    int a = 20;
    float f = 2.45;
    char c = 'X';
    double d = 7.77;
    bool isTall = false;

    printf("Size of int : %d\n", sizeof(a));
    printf("Size of float : %d\n", sizeof(f));
    printf("Size of char : %d\n", sizeof(c));
    printf("Size of double : %d\n", sizeof(d));
    printf("Size of bool : %d\n", sizeof(isTall));


    return 0;
}
