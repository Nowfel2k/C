#include<stdio.h>   // Default header
#include<string.h>  // Used for strcpy function
#include<stdbool.h> // Boolean used to check availability
#include<windows.h> // Used for Sleep function


char destination[20]; // Global variable so it is accessible to all functions


struct car{

bool available; // Yes (1) or No (0)
char type[10];  // Mini or Prime or Auto
int distance;   // In Meters

}first, second, third, fourth, fifth;   // Creating 5 OLA Cabs


// Function declarations on top
void openOLA();
void checkNearestTaxi();
void viewAllTaxi();


// Description of the taxi structures
int main(){

    printf("\nEnter destination : ");
    gets(destination);

    first.available = 1;
    strcpy(first.type, "Mini");
    first.distance = 250;


    second.available = 0;
    strcpy(second.type, "Mini");
    second.distance = 150;

    third.available = 1;
    strcpy(third.type, "Auto");
    third.distance = 600;

    fourth.available = 1;
    strcpy(fourth.type, "Prime");
    fourth.distance = 185;

    fifth.available = 1;
    strcpy(fifth.type, "Prime");
    fifth.distance = 350;

    openOLA();

    return 0;
}



// OLA Application with four choices
void openOLA(){
    Sleep(3000);
    int request;
    printf("\n\n\nPress 1 to book a taxi"\
           "\nPress 2 to check the nearest ola"\
           "\nPress 3 to view all the ola nearby"\
           "\nPress 4 to exit app\n\n");

    scanf("%d", &request);

    switch(request){

        case 1:
        bookTaxi();
        break;

        case 2:
        checkNearestTaxi();
        break;

        case 3:
        viewAllTaxi();
        break;

        case 4:
        exit(0);

        default:
        printf("\nInvalid input, enter again");
        break;


    }
}



// To view all the taxis which are available
void viewAllTaxi(){

    if(first.available) printf("\n%s available at distance %d meters", first.type, first.distance);
    if(second.available) printf("\n%s available at distance %d meters", second.type, second.distance);
    if(third.available) printf("\n%s available at distance %d meters", third.type, third.distance);
    if(fourth.available) printf("\n%s available at distance %d meters", fourth.type, fourth.distance);
    if(fifth.available) printf("\n%s available at distance %d meters", fifth.type, fifth.distance);
    openOLA();
}



// To book the taxis which are available
void bookTaxi(){
    int bookThis, timeToCome;
    char bookedTaxi[20];



    Sleep(2000);

    if(first.available) printf("\n\n1- %s available %d meters away", first.type, first.distance);
    if(second.available) printf("\n2- %s available %d meters away", second.type, second.distance);
    if(third.available) printf("\n3- %s available %d meters away", third.type, third.distance);
    if(fourth.available) printf("\n4- %s available %d meters away", fourth.type, fourth.distance);
    if(fifth.available) printf("\n5- %s available %d meters away", fifth.type, fifth.distance);

    printf("\n\nEnter which one to book : ");
    scanf("%d", &bookThis);


    switch(bookThis){

    case 1:
        if(first.available==1){
            strcpy(bookedTaxi,"First Cab");
            printf("\n%s (%s) is booked",bookedTaxi,first.type);
            timeToCome = (first.distance*10);
        }else{
            strcpy(bookedTaxi,"First Cab");
            printf("\n%s is not available, please choose another cab.",bookedTaxi);
            strcpy(bookedTaxi,"\0");
            bookTaxi();
        }
        break;

    case 2:
        if(second.available==1){
            strcpy(bookedTaxi,"Second Cab");
            printf("\n%s (%s) is booked",bookedTaxi,second.type);
            timeToCome = (second.distance*10);
        }else{
            strcpy(bookedTaxi,"Second Cab");
            printf("\n%s is not available, please choose another cab.",bookedTaxi);
            strcpy(bookedTaxi,"\0");
            bookTaxi();
        }
        break;

    case 3:
        if(third.available==1){
            strcpy(bookedTaxi,"Third Cab");
            printf("\n%s (%s) is booked",bookedTaxi,third.type);
            timeToCome = (third.distance*10);
        }else{
            strcpy(bookedTaxi,"Third Cab");
            printf("\n%s is not available, please choose another cab.",bookedTaxi);
            strcpy(bookedTaxi,"\0");
            bookTaxi();
        }
        break;

    case 4:
        if(fourth.available==1){
            strcpy(bookedTaxi,"Fourth Cab");
            printf("\n%s (%s) is booked",bookedTaxi,fourth.type);
            timeToCome = (fourth.distance*10);
        }else{
            strcpy(bookedTaxi,"Fourth Cab");
            printf("\n%s is not available, please choose another cab.",bookedTaxi);
            strcpy(bookedTaxi,"\0");
            bookTaxi();
        }
        break;

    case 5:
        if(fifth.available==1){
            strcpy(bookedTaxi,"Fifth Cab");
            printf("\n%s (%s) is booked",bookedTaxi,fifth.type);
            timeToCome = (fifth.distance*10);
        }else{
            strcpy(bookedTaxi,"Fifth Cab");
            printf("\n%s is not available, please choose another cab.",bookedTaxi);
            strcpy(bookedTaxi,"\0");
            bookTaxi();
        }
        break;

    default:
        printf("\nWrong input, please try again");
        bookTaxi();
    }

    Sleep(2000);
    printf("\n\nYour OTP number is 61695");

    Sleep(1000);

    printf("\n\nYour vehicle is arriving");

    Sleep(timeToCome);

    printf("\n\nYour vehicle has arrived");

    Sleep(1000);

    printf("\n\nEnjoy your travel to %s\n\n", destination);

    Sleep(5000);

    exit(0);

}



// To find the nearest taxi to you
void checkNearestTaxi(){
    int lowestOfFirstTest, lowestOfSecondTest, lowestOfBothTest, lowestDistance;
    char selectedCab1[17], selectedCab2[17], selectedCab3[17], reallySelected[17];


    if((first.distance<second.distance)&&(first.available==1)){
        lowestOfFirstTest = first.distance;
        strcpy(selectedCab1,"First Cab");
        printf("\ncondition matches 1\n");
    }
    if((first.distance>second.distance)&&(second.available==1)){
        lowestOfFirstTest = second.distance;
        strcpy(selectedCab1,"Second Cab");
        printf("\ncondition matches 2\n");
    }



    if((third.distance<fourth.distance)&&(third.available==1)){
        lowestOfSecondTest = third.distance;
        strcpy(selectedCab2,"Third Cab");
    }else if((third.distance>fourth.distance)&&(fourth.available==1)){
        lowestOfSecondTest = fourth.distance;
        strcpy(selectedCab2,"Fourth Cab");
    }else{
        printf("\nData of third and fourth not intact.");
    }



    if(lowestOfFirstTest<lowestOfSecondTest){
        lowestOfBothTest = lowestOfFirstTest;
        strcpy(selectedCab3, selectedCab1);
    }else{
        lowestOfBothTest = lowestOfSecondTest;
        strcpy(selectedCab3, selectedCab2);
    }


    if(lowestOfBothTest<fifth.distance){
        lowestDistance = lowestOfBothTest;
        strcpy(reallySelected, selectedCab3);
    }else if(fifth.available==1){
        lowestDistance = fifth.distance;
        strcpy(reallySelected, "Fifth Cab");
    }else{
        lowestDistance = lowestOfBothTest;
        strcpy(reallySelected, selectedCab3);
    }

    printf("\n%s (%d meters) is the closest cab to you.\n", reallySelected, lowestDistance);
    openOLA();

}








