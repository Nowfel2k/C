#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>


// GLOBAL VARIABLES
char a[10][10] = {'-', '-', '-','-', '-', '-','-', '-', '-','-', '-', '-','-', '-', '-','-', '-', '-','-','-', '-','-', '-', '-','-','-', '-', '-','-', '-', '-','-', '-', '-','-', '-', '-','-', '-', '-','-', '-', '-','-','-', '-','-', '-', '-','-','-', '-', '-','-', '-', '-','-', '-', '-','-', '-', '-','-', '-', '-','-', '-', '-','-','-', '-','-', '-', '-','-','-', '-', '-','-', '-', '-','-', '-', '-','-', '-', '-','-', '-', '-','-', '-', '-','-','-', '-','-', '-', '-','-'};
char p1[20], p2[20];
int choice;
bool gameEnd = 0;


// MAIN FUNCTION
int main(){
    getchar();
    gameIntro();
    startGame(); // --> xTurn oTurn --> checkWinner --> check row/col/diagonal
    return 0;
}


void gameIntro(){

    printf("\t\t\t************************************");
    printf("\n\t\t\t**                                **");
    printf("\n\t\t\t**                                **");
    printf("\n\t\t\t**           WELCOME              **");
    printf("\n\t\t\t**             TO                 **");
    printf("\n\t\t\t**          CONNECT 4             **");
    printf("\n\t\t\t**                                **");
    printf("\n\t\t\t**                                **");
    printf("\n\t\t\t************************************");

    Sleep(5000);

    printf("\n\n\n\tTHIS IS HOW THE GAME WORKS :\n\n\
            1. THERE ARE TWO PLAYERS AND THEY HAVE X AND O COINS\n\
            2. EACH HAVE THEIR TURNS BACK TO BACK LIKE X O GAME\n\
            3. CHOOSE THE SLOT TO INSERT COIN & IT WILL DROP TO THE BOTTOM OF THE BOARD\n\
            4. THE FIRST ONE TO CONNECT 4 COINS WINS THE GAME");

    printf("\n\n\tPRESS ANY BUTTON TO START THE GAME!");
    if(getchar()) system("cls");


    printf("\n\t\tEnter player 1 name : ");
    gets(p1);
    printf("\n\t\tEnter player 2 name : ");
    gets(p2);

    system("cls");

    Sleep(2000);


}


void showBoard(){
printf("\n");
printf("\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n\n\n");

for(int i=0; i<=9; i++){
    for(int j=0; j<=9; j++){
        printf("\t%c", a[i][j]);
        }
        printf("\n\n");
    }
}


void startGame(){
    if(gameEnd == 0) xTurn();
    if(gameEnd == 0) oTurn();
    if(gameEnd == 0) startGame();
}


void xTurn(){
    int row=9;
    showBoard();

    printf("\n\n");
    printf("%s's TURN", p1);
    printf("\nEnter X in slot (1-10) : ");
    scanf("%d", &choice);

    while(choice>10){
        printf("\nInvalid slot, enter again");
        Sleep(2000);
        system("cls");
        showBoard();
        printf("\n\n");
        printf("%s's TURN", p1);
        printf("\nEnter X in slot (1-10) : ");
        scanf("%d", &choice);
    }

    choice = choice - 1;

    while(a[row][choice]=='X' || a[row][choice]=='O'){
        row--;
        if(a[0][choice]=='X' || a[0][choice]=='O'){
            printf("\nSlot Full, Enter again");
            Sleep(2000);
            system("cls");
            xTurn();
            break;
        }
    }

    if(a[0][choice]!='X' || a[0][choice]!='O'){
        a[row][choice] = 'X';
        checkWinner(row, choice);
        row=9;
        system("cls");
    }

}

void oTurn(){
    int row=9;
    showBoard();

    printf("\n\n");
    printf("%s's TURN", p2);
    printf("\nEnter O in slot : ");
    scanf("%d", &choice);
    choice = choice - 1;

    while(choice>10){
        printf("\nInvalid slot, enter again");
        Sleep(2000);
        system("cls");
        showBoard();
        printf("\n\n");
        printf("%s's TURN", p2);
        printf("\nEnter O in slot (1-10) : ");
        scanf("%d", &choice);
    }

    while(a[row][choice]=='X' || a[row][choice]=='O'){
        row--;
        if(a[0][choice]=='X' || a[0][choice]=='O'){
            printf("\nSlot Full, Enter again");
            Sleep(2000);
            system("cls");
            oTurn();
            break;
        }
    }

    if(a[0][choice]!='X' || a[0][choice]!='O'){
        a[row][choice] = 'O';
        checkWinner(row, choice);
        row=9;
        system("cls");
    }

}


void checkWinner(int r, int c){

    checkRow(r,c);
    checkCol(r,c);
    checkRightDiagonal(r,c);
    checkLeftDiagonal(r,c);

}


void checkRow(int r, int c){

    if((a[r][c-3] == a[r][c-2]) && (a[r][c-2] == a[r][c-1]) && (a[r][c-1] == a[r][c]) && (a[r][c]!='-')){
        gameEnd = 1;
        system("cls");
        showBoard();
        if(a[r][c]=='X') printf("\n%s is the winner!", p1);
        if(a[r][c]=='O') printf("\n%s is the winner!", p2);
getchar(); exit(0);
    }

    if((a[r][c-2] == a[r][c-1]) && (a[r][c-1] == a[r][c]) && (a[r][c] == a[r][c+1]) && (a[r][c]!='-')){
        gameEnd = 1;
                system("cls");
        showBoard();
        if(a[r][c]=='X') printf("\n%s is the winner!", p1);
        if(a[r][c]=='O') printf("\n%s is the winner!", p2);
        getchar(); exit(0);
    }

    if((a[r][c-1] == a[r][c]) && (a[r][c] == a[r][c+1]) && (a[r][c+1] == a[r][c+2]) && (a[r][c]!='-')){
        gameEnd = 1;
        system("cls");
        showBoard();
        if(a[r][c]=='X') printf("\n%s is the winner!", p1);
        if(a[r][c]=='O') printf("\n%s is the winner!", p2);
        getchar(); exit(0);
    }

    if((a[r][c] == a[r][c+1]) && (a[r][c+1] == a[r][c+2]) && (a[r][c+2] == a[r][c+3]) && (a[r][c]!='-')){
        gameEnd = 1;
        system("cls");
        showBoard();
        if(a[r][c]=='X') printf("\n%s is the winner!", p1);
        if(a[r][c]=='O') printf("\n%s is the winner!", p2);
        getchar(); exit(0);
    }
}

void checkCol(int r, int c){

    if((a[r-3][c] == a[r-2][c]) && (a[r-2][c] == a[r-1][c]) && (a[r-1][c] == a[r][c]) && (a[r][c]!='-')){
        gameEnd = 1;
        system("cls");
        showBoard();
        if(a[r][c]=='X') printf("\n%s is the winner!", p1);
        if(a[r][c]=='O') printf("\n%s is the winner!", p2);
        getchar(); exit(0);
    }

    if((a[r-2][c] == a[r-1][c]) && (a[r-1][c] == a[r][c]) && (a[r][c] == a[r+1][c]) && (a[r][c]!='-')){
        gameEnd = 1;
        system("cls");
        showBoard();
        if(a[r][c]=='X') printf("\n%s is the winner!", p1);
        if(a[r][c]=='O') printf("\n%s is the winner!", p2);
        getchar(); exit(0);
    }

    if((a[r-1][c] == a[r][c]) && (a[r][c] == a[r+1][c]) && (a[r+1][c] == a[r+2][c]) && (a[r][c]!='-')){
        gameEnd = 1;
        system("cls");
        showBoard();
        if(a[r][c]=='X') printf("\n%s is the winner!", p1);
        if(a[r][c]=='O') printf("\n%s is the winner!", p2);
        getchar(); exit(0);
    }

    if((a[r][c] == a[r+1][c]) && (a[r+1][c] == a[r+2][c]) && (a[r+2][c] == a[r+3][c]) && (a[r][c]!='-')){
        gameEnd = 1;
        system("cls");
        showBoard();
        if(a[r][c]=='X') printf("\n%s is the winner!", p1);
        if(a[r][c]=='O') printf("\n%s is the winner!", p2);
        getchar(); exit(0);
    }
}

void checkRightDiagonal(int r, int c){

        if((a[r-3][c+3] == a[r-2][c+2]) && (a[r-2][c+2] == a[r-1][c+1]) && (a[r-1][c+1] == a[r][c]) && (a[r][c]!='-')){
            gameEnd = 1;
            system("cls");
            showBoard();
            if(a[r][c]=='X') printf("\n%s is the winner!", p1);
            if(a[r][c]=='O') printf("\n%s is the winner!", p2);
            getchar(); exit(0);
        }

        if((a[r-2][c+2] == a[r-1][c+1]) && (a[r-1][c+1] == a[r][c]) && (a[r][c] == a[r+1][c-1]) && (a[r][c]!='-')){
            gameEnd = 1;
            system("cls");
            showBoard();
            if(a[r][c]=='X') printf("\n%s is the winner!", p1);
            if(a[r][c]=='O') printf("\n%s is the winner!", p2);
            getchar(); exit(0);
        }

        if((a[r-1][c+1] == a[r][c]) && (a[r][c] == a[r+1][c-1]) && (a[r+1][c-1] == a[r+2][c-2]) && (a[r][c]!='-')){
            gameEnd = 1;
            system("cls");
            showBoard();
            if(a[r][c]=='X') printf("\n%s is the winner!", p1);
            if(a[r][c]=='O') printf("\n%s is the winner!", p2);
            getchar(); exit(0);
        }

        if((a[r][c] == a[r+1][c-1]) && (a[r+1][c-1] == a[r+2][c-2]) && (a[r+2][c-2] == a[r+3][c-3]) && (a[r][c]!='-')){
            gameEnd = 1;
            system("cls");
            showBoard();
            if(a[r][c]=='X') printf("\n%s is the winner!", p1);
            if(a[r][c]=='O') printf("\n%s is the winner!", p2);
            getchar(); exit(0);
        }
}


void checkLeftDiagonal(int r, int c){

    if((a[r-3][c-3] == a[r-2][c-2]) && (a[r-2][c-2] == a[r-1][c-1]) && (a[r-1][c-1] == a[r][c]) && (a[r][c]!='-')){
        gameEnd = 1;
        system("cls");
        showBoard();
        if(a[r][c]=='X') printf("\n%s is the winner!", p1);
        if(a[r][c]=='O') printf("\n%s is the winner!", p2);
        getchar(); exit(0);
    }

    if((a[r-2][c-2] == a[r-1][c-1]) && (a[r-1][c-1] == a[r][c]) && (a[r][c] == a[r+1][c+1]) && (a[r][c]!='-')){
        gameEnd = 1;
        system("cls");
        showBoard();
        if(a[r][c]=='X') printf("\n%s is the winner!", p1);
        if(a[r][c]=='O') printf("\n%s is the winner!", p2);
        getchar(); exit(0);
    }

    if((a[r-1][c-1] == a[r][c]) && (a[r][c] == a[r+1][c+1]) && (a[r+1][c+1] == a[r+2][c+2]) && (a[r][c]!='-')){
        gameEnd = 1;
        system("cls");
        showBoard();
        if(a[r][c]=='X') printf("\n%s is the winner!", p1);
        if(a[r][c]=='O') printf("\n%s is the winner!", p2);
        getchar(); exit(0);
    }

    if((a[r][c] == a[r+1][c+1]) && (a[r+1][c+1] == a[r+2][c+2]) && (a[r+2][c+2] == a[r+3][c+3]) && (a[r][c]!='-')){
        gameEnd = 1;
        system("cls");
        showBoard();
        if(a[r][c]=='X') printf("\n%s is the winner!", p1);
        if(a[r][c]=='O') printf("\n%s is the winner!", p2);
        getchar(); exit(0);
    }
}

















