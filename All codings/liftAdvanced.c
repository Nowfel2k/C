    /*


   CREATING A LIFT WORKING IN AN OFFICE WITH SEVERAL LIFTS AND
   THEIR DIRECTION AT WHICH THEY ARE MOVING.
   ORIGINAL LIFT WORKING IN C LANGUAGE.

   LIFT MOVES UP TILL IT REACHES TOP AND COMES DOWN TILL IT REACHES
   GROUND FLOOR



   */

/* THREE LIFTS
   TOTAL NUMBER OF FLOORS : 12 */


#include<stdio.h>
#include<limits.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>

// STRUCTURE

struct lift {

    int position; // position of the lift
    char direction[20]; // going upwards or down
    int distance; // travel needed from position -> user -> destination

}first, second, third;


// GLOBAL VARIABLES

int currentFloor = 0;

static int destination;


// enter destination - check the lift total travel distance - lowest travel lift is chose
// simple mission!


// FUNCTIONS

void findTravelTime(){


    // for first lift
    // current pos - lift pos - direction - distance
    if(currentFloor<first.position && strcmpi(first.direction,"down")==0){
        first.distance = first.position - currentFloor;
    }

    else if(currentFloor<first.position && strcmpi(first.direction, "down")!=0){
        first.distance = 0;
        first.distance += 2*(12-first.position); // now it is at the same position as before
        // but direction is DOWN
        first.distance += first.position-currentFloor;
    }

    else if(currentFloor>first.position && strcmpi(first.direction,"up")==0){
        first.distance = currentFloor - first.position;
    }

    else if(currentFloor>first.position && strcmpi(first.direction,"up")!=0){
        first.distance = 0;
        first.distance += 2*(first.position); // now it is at the same position as before
        // but direction is UP
        first.distance += currentFloor - first.position;
    }

    printf("\nfirst travel time : %d", first.distance);



    // for second lift
    // current pos - lift pos - direction - distance
    if(currentFloor<second.position && strcmpi(second.direction,"down")==0){
        second.distance = second.position - currentFloor;
    }

    else if(currentFloor<second.position && strcmpi(second.direction, "down")!=0){
        second.distance = 0;
        second.distance += 2*(12-second.position); // now it is at the same position as before
        // but direction is DOWN
        second.distance += second.position-currentFloor;
    }

    else if(currentFloor>second.position && strcmpi(second.direction,"up")==0){
        second.distance = currentFloor - second.position;
    }

    else if(currentFloor>second.position && strcmpi(second.direction,"up")!=0){
        second.distance = 0;
        second.distance += 2*(second.position); // now it is at the same position as before
        // but direction is UP
        second.distance += currentFloor - second.position;
    }

    printf("\nsecond travel time : %d", second.distance);






    // for third lift
    // current pos - lift pos - direction - distance
    if(currentFloor<third.position && strcmpi(third.direction,"down")==0){
        third.distance = third.position - currentFloor;
    }

    else if(currentFloor<third.position && strcmpi(third.direction, "down")!=0){
        third.distance = 0;
        third.distance += 2*(12-third.position); // now it is at the same position as before
        // but direction is DOWN
        third.distance += third.position-currentFloor;
    }

    else if(currentFloor>third.position && strcmpi(third.direction,"up")==0){
        third.distance = currentFloor - third.position;
    }

    else if(currentFloor>third.position && strcmpi(third.direction,"up")!=0){
        third.distance = 0;
        third.distance += 2*(third.position); // now it is at the same position as before
        // but direction is UP
        third.distance += currentFloor - third.position;
    }

    printf("\nthird travel time : %d", third.distance);


}



void displayChosenLift(){

    if(first.distance<=second.distance && first.distance<=third.distance) printf("\n\nFirst is BEST");

    if(second.distance<=first.distance && second.distance<=third.distance) printf("\n\nSecond is BEST");

    if(third.distance<=second.distance && third.distance<=first.distance) printf("\n\nFirst is BEST");

}









int main(){

    first.position = 12; second.position = 8; third.position = 5;



    strcpy(first.direction, "up");
    strcpy(second.direction, "up");
    strcpy(third.direction, "up");


    findTravelTime();
    displayChosenLift();

return 0;

}



/* HELLO THERE HOW ARE YOU DOING?? */




/* TESTING 2 we are in 60 FPS right now!! */












