#include<stdio.h>

int main() {

    // hour and minute hand
    // 12 parts
    // 360 / 12 = 30 degree for each part

    int hour, minute;
    printf("\n\nEnter hour and minute hand (like 1 50) : ");
    scanf("%d %d", &hour, &minute);


    if(hour >= 1 || hour <= 12 || minute >= 0 || minute <= 60) {

        int minuteInMinutes = minute;

        if(minute >= 5) minute /= 5;
        else if (minute < 5 && minute >= 0) minute = 12;
        else printf("Second invalid in check");

        int difference = hour - minute;
        if(difference < 0) difference *= -1;

        if(difference == 7) difference = 5;
        if(difference == 8) difference = 4;
        if(difference == 9) difference = 3;
        if(difference == 10) difference = 2;
        if(difference == 11) difference = 1;

        // each difference equals 5 minutes which is 30* degrees

        int angle = difference * 30;


        printf("\nAt %d : %d AM/PM, the degree is %d", hour, minuteInMinutes, angle);

        }

        else{
            printf("Invalid input");
            main();
            return;
        }


    main();
    return 0;
}
