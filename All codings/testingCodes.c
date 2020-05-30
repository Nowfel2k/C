#include<stdio.h>

// This type wraps your 4x4 matrix

typedef struct {
    int arr[4][4];
} FourByFour;


// Now rotate(m) can use FourByFour as a type

/* return type struct */ FourByFour rotate(FourByFour m) {
    FourByFour D;
    for(int i = 0; i < 4; i ++ ){
        for(int n = 0; n < 4; n++){
            D.arr[i][n] = m.arr[n][3 - i];
        }
    }
    return D;
}
// Here is a demo of your rotate(m) in action:

int main(void) {
    FourByFour S = {.arr = {
        { 1, 4, 10, 3 },
        { 0, 6, 3, 8 },
        { 7, 10 ,8, 5 },
        { 9, 5, 11, 2}
    } };

    FourByFour r = rotate(S);
    for(int i=0; i < 4; i++ ){
        for(int n=0; n < 4; n++){
            printf("%d ", r.arr[i][n]);
        }
        printf("\n");
    }
    return 0;
}
