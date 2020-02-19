#include<stdio.h>

int main(){


    int t;
    int a1, a2, a3, s, g;

    // NUMBER OF TEST CASES
    scanf("%d", &t);
    printf("\n\n");

    while(t!=0){
        // TAKING INPUT OF DATA FOR EACH TEST
        scanf("%d %d %d %d %d", &a1, &a2, &a3, &s, &g);
        t--;

        int sum=0;
        sum = a1 + a2 + a3 + s + g;
        // IF CHECKS THE MINIMUM REQUIREMENT FOR EACH OF THE COACHES
        if(a1>=1 && a2>=2 && a3>=3 && s>=6 && g>=10){
            int num=0;
            num=sum/22;
            printf("\n%d\n\n", num);
        }
        // IF CONDITION FAILS THERE CANNOT BE EVEN ONE TRAIN
        else{
            printf("\n0\n\n");
        }

    }


    return 0;
}
