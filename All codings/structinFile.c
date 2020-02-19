#include<stdio.h>

struct student{

int regno;
int marks;
};


main(){
struct student navfal;
FILE *p, *q;

p = fopen("sample.txt", "w");
q = fopen("sample.txt", "r");

printf("Enter registration number and marks : ");
scanf("%d %d", &navfal.regno, &navfal.marks);

fprintf(p, "%d %d", navfal.regno, navfal.marks);
fclose(p);

    do{
        fscanf(q, "%d %d", navfal.regno, navfal.marks);
        printf("%d number student scored %d", navfal.regno, navfal.marks);
    }
    while(!feof(q));
fclose(q);



}
