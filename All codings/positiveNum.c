#include<stdio.h>
#include<math.h>
#include<windows.h>

main() {

    int num, digitCount=0;
    printf("\n\nEnter number to check : ");
    scanf("%d", &num);

    int temp = num;
    while(temp!=0){
        temp /= 10;
        digitCount++;
    }

    int rem, sum=0;
    temp = num;
    while(temp!=0){
        rem = temp%10;
        Sleep(1000);
        printf("\ntemp is %d", temp);
        sum += pow(rem, digitCount);
        temp /= 10;
    }

    printf("sum is : %d", sum);

    if(num==sum) printf("\nArmstrong Number\n");
    else printf("\nNot Armstrong\n");

    main();
}
