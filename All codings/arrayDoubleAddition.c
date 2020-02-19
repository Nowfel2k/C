#include<stdio.h>

void main() {

    int a[3][3];

    for(int i = 0; i < 3; i++){
        for(int j=0; j<3; j++){
            printf("Enter Matrix Element [%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int firstRow = a[0][0] + a[0][1] + a[0][2];
    int secondRow = a[1][0] + a[1][1] + a[1][2];
    int thirdRow = a[2][0] + a[2][1] + a[2][2];

    int firstColumn = a[0][0] + a[1][0] + a[2][0];
    int secondColumn = a[0][1] + a[1][1] + a[2][1];
    int thirdColumn = a[0][2] + a[1][2] + a[2][2];

    printf("Row-1 %d %d %d = %d (sum)\n", a[0][0], a[0][1], a[0][2], firstRow);
    printf("Row-2 %d %d %d = %d (sum)\n", a[1][0], a[1][1], a[1][2], secondRow);
    printf("Row-3 %d %d %d = %d (sum)\n", a[2][0], a[2][1], a[2][2], thirdRow);
    printf("Sumof %d %d %d = %d  All\n", firstColumn, secondColumn, thirdColumn);




}
