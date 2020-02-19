#include<stdio.h>

main(){
    int i,j;
    char a[]={'N','A','V','F','A','L'};

    for(i=0; i<7; i++){
        for(j=0; j<i; j++){
            printf(" %c ", a[j]);
        }
        printf("\n");
    }


    for(i=5; i>0; i--){
        for(j=0; j<i; j++){
            printf(" %c ", a[j]);
        }
        printf("\n");
    }

    getchar();
}
