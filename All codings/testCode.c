#include<stdio.h>
#include<string.h>

struct car{

char name[20];
char type[20];

};

void main(){

int num;
printf("Enter number of cars : ");
scanf("%d", &num);

char nameInput[20];
char typeInput[20];

for(int i=1; i<=num; ++i){

    char nameInput[20] = "\0";
    char typeInput[20] = "\0";

    printf("name of car %d : ", i);
    scanf("%s", nameInput);

    printf("type of car %d : ", i);
    scanf("%s", typeInput);

    struct car i;

    strcpy(i.name, nameInput);
    strcpy(i.type, typeInput);

    printf("\nCar %d is %s of model %s", i, i.name, i.type);

}


}
