#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct features{

char name[30];
char model[30];
int price;

};


int main(){

int num;
printf("Enter number of cars : ");
scanf("%d", &num);

struct features car[num];

int i;
for(i=1; i<=num; i++){
    printf("\nEnter name of car number %d : ", i);
    scanf("%s", car[i].name);
    printf("Enter price of car number %d : ", i);
    scanf("%d", &car[i].price);
    printf("Enter model of car number %d : ", i);
    scanf("%s", car[i].model);
    printf("\n");
    }

for(i=1; i<=num; i++){
    printf("\n%s car has price $%d",car[i].name, car[i].price);
    printf("\n%s is the model\n\n", car[i].model);
    }


}

