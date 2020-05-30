#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int findLeastDistance(int a[], int index, int len) {

    int left, right;

    if(index + 1 < len)
        left = abs(a[index] - a[index+1]) + findLeastDistance(a, index + 1, len);
    else left = 0;

    if(index + 2 < len)
        right = abs(a[index] - a[index+2]) + findLeastDistance(a, index + 2, len);
    else right = 0;

    printf("\nLeft is %d and Right is %d", left, right);

    // Return minimum value
    if(left <= right) return left;
    else return right;
}


int main() {

    int n;

    printf("Enter length of array > ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0 ; i < n ; i++) {
        printf("\nIndex [%d] > ", i);
        scanf("%d", &a[i]);
    }

    printf("%d", findLeastDistance(a, 0, n));


    return 0;

}
