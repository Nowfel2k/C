#include <stdio.h>
#include <stdbool.h>

/*
typedef struct mazeCell {

    char cell;
    bool ratPresent;

} ratMaze;

ratMaze maze[n][n];

void findPathway(int x, int y, struct mazeCell maze[3][3]) {


            printf(" %c ", maze[x][y].cell);

}
*/






int main() {


    char maze[10][10];

    int n;
    scanf("%d", &n);



    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            maze[i][j] = 'X';
        }
    }



    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            printf("\n%d %d  > ", i, j);
            scanf("%c", &maze[i][j]);
        }
    }

    // Get number and location of rats
    int ratsNum;
    scanf("%d", &ratsNum);

    bool rats[n][n];
    int x, y;
    while(ratsNum != 0) {
        scanf("%d %d", &x, &y);
        rats[x-1][y-1] = true;
        ratsNum--;
    }

    // For each rat present in cell, check the adjacent cells and confirm rat connection
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {

            if(rats[i][j]) {

                // Logic
                printf("\nRat found at %d %d", i, j);







            }
            printf("\n");



        }
    }



}
