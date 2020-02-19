#include <stdio.h>

main(){

    // GETTING INPUT FROM USER
    int num;
    printf("\nEnter number to check : ");
    scanf("%d", &num);
    is_prime(num);
}

is_prime(int x){

    // EXCEPTION FOR 1
    if(x==1) {
        printf("\n%d is not prime number", x);
        next_prime(x);

    }

    // COUNT : MEASURES THE NUMBER DIVISBILITY
    int count=0;
    for(int i=2; i<x; i++){
        if(x%i==0){
            count++;
        }
    }


    // CHECKS IF NUM IS PRIME OR NOT
    if(count==0){
        printf("\n%d is a prime number", x);

    }
    else{
        printf("\n%d is NOT a prime number", x);
        last_prime(x);
        next_prime(x);

    }
}

last_prime(int x){

    x--;
    int count=0;
    for(int i=2; i<x/2; i++){
        if(x%i==0){
            count++;
        }
    }


    // CHECKS PRIME NUMBERS BEFORE THE NUM
    if(count==0){
        printf("\n%d is the closest prime number before the given number", x);
    }
    else{
        last_prime(x);
    }

}


next_prime(int x){

    x++;
    int count=0;
    for(int i=2; i<x/2; i++){
        if(x%i==0){
            count++;
        }
    }


    // CHECKS PRIME NUMBERS AFTER THE NUM
    if(count==0){
        printf("\n%d is the closest prime number after the given number", x);
    }
    else{
        next_prime(x);
    }

}


