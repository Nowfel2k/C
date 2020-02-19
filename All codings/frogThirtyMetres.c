/* A FROG FALLS INTO A PIT OF 30 METERS DEEP
   EACH DAY THE FROG CLIMBS 3 METERS AND
   DURING NIGHT, FALLS DOWN 2 METERS.
   HOW MUCH DAYS WILL IT TAKE FOR IT TO ESCAPE? */

#include<stdio.h>
#include<windows.h>

int main(){
    int currentPos = 0;
    // FOR LOOP SET FOR 30 DAYS AS TEST
    for(int i=1; i<=30; i++){
        Sleep(1000);
        printf("\n");
        currentPos += 3;

        printf("\nDay %d - Meters reached at Daytime : %d m", i, currentPos);
        Sleep(500);
        // IF THE FROG REACHES 30 METERS IT HAS COME OUT OF HOLE
        if(currentPos >= 30) {
                printf("\nReached the top");
                break;
        }

        currentPos -= 2;
        printf("\nDay %d - Meters reached at Night : %d m", i, currentPos);
        // IF THE FROG REACHES 30 METERS IT HAS COME OUT OF HOLE
        if(currentPos >= 30) {
                printf("\nReached the top");
                break;
        }
    }
}
