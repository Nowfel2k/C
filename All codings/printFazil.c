#include<stdio.h>
#define print(a) printf(" %c ",a)

void main(){

    char name[] = {'F','A','Z','I','L'};

    for(int i=0; i<5; i++){
        for(int j=0; j<=i; j++){
            print(name[j]);
        }
        printf("\n");
    }


}
