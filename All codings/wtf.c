#include<stdio.h>
#include<stdlib.h>
main()
{
    int i,n,newn,sum=0;
    printf("Enter Limit of n:");
    scanf("%d", n);
    printf("\nAdding the sum of :");
    for(i=1; i<=n; i++){
        scanf("%d", &newn);
        sum = sum + newn;
    }
    printf("\nThe total of them: %d", sum);
}
