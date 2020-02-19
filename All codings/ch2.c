#include<stdio.h>
#include<stdlib.h>

int main() {
    int x=5, y=0, a, b;
    a=++y||++x;
    b=--y&&++x;

//Cout<<x<<y<<a<<b;
    printf(" %d %d %d %d ",x, y, a, b);

    return 0;
}
