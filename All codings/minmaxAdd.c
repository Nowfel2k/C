#include<stdio.h>
#include<windows.h>
main(){

    int a[10];

    printf("\nEnter 5 elements : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &a[i]);
    }

    // TO FIND MINIMUM VALUE AND FIND MAX SUM
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(a[i]<a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    int maxTemp = a[0];
    a[0] = 0;
    long maxSum=0;
    for(int i=0; i<5; i++) {
        maxSum += a[i];
    }
    a[0] = maxTemp;

    // TO FIND MAXIMUM VALUE AND FIND MIN SUM
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    int minTemp = a[0];
    a[0] = 0;
    long minSum=0;
    for(int i=0; i<5; i++) {
        minSum += a[i];
    }
    a[0] = minTemp;


    printf("\n%ld %ld", minSum, maxSum);

}
