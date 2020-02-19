#include<stdio.h>
#include<time.h>

void delay(int second){

    int milsec = 1000 * second;

    clock_t startTime = clock();

    while(clock() < (startTime + milsec));

}

void main(){

printf("First\n");

delay(3);

printf("Second\n");
}
