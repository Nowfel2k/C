#include<stdio.h>

void main()
{
    int a[5] = {1,2,3,4,5};
    char b[5] = {'a','b','c','d','e'};

    int n = 5;

    while( n!=0)
    {
        for(int i=0; i<n ;i++) {
            for(int j=0; j<n ;j++)
                printf(" %c ", b[i]);
            n--;
            printf("\n");
        }


       for(int i=0; i<n ;i++) {
            for(int j=0; j<n ;j++)
                printf(" %d ", a[i]);
        n--;
        printf("\n");

       }
    }
}
