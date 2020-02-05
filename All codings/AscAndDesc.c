#include<stdio.h>
#include<stdlib.h>

int main(){
int a[30], n, i, j, temp, min, max;
printf("Enter the number of elements :");
scanf("%d", &n);

for(i=0; i<n; i++){
    printf("\nEnter element[%d]", i);
    scanf("%d", &a[i]);
}

max = a[0];
for(i=0; i<n; i++){
        for(j=0; j<i; j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
}

for(i=0; i<n; i++)
    printf("\n%d", a[i]);

return 0;
}
