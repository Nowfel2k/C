#include <stdio.h>

int main() {

    int n, i, j;

    scanf("%d", &n);

    char a[n][n];

    for(i = 0 ; i < n ; i++) {
        for(j = 0 ; j < n ; j++) {
                int ch = getchar();
        a[i][j] = (char)ch;

        }
        printf("\nNew Line");
}




    for(i = 0 ; i < n ; i++)
        for(j = 0 ; j < n ; j++)
            printf("%d %d : %c\n", i, j, a[i][j]);




    return 0;
}
