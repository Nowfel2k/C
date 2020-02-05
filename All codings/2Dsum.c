#include<stdio.h>
#include<stdlib.h>
int main(){
int a[5][5], i, j, m, n, sum=0;
printf("Enter matrix rows and cols:");
scanf("%d %d", &m, &n);

printf("\nEnter array elements :");
for(i=0; i<m; i++)
    for(j=0; j<n; j++)
        scanf("%d", &a[i][j]);

for(i=0; i<m; i++)
    for(j=0; j<n; j++)
        sum = sum+a[i][j];
printf("\nTotal sum of the elements : %d", sum);
return 0;
}
