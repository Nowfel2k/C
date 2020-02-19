#include<stdio.h>

int main() {


    int first, second, third;
    printf("\nEnter three numbers to check greatest : ");
    scanf("%d %d %d" , &first, &second, &third);

    int temp = first;
    first = second;
    second = third;
    third = temp;

    // CHECKING GREATEST
    if(first>=second && first>=third) printf("first number (%d) is the greatest ", first);
    if(second>=first && second>=third) printf("second number (%d) is the greatest ", second);
    if(third>=second && third>=first) printf("third number (%d) is the greatest ", third);

    main();



    return 0;
}
