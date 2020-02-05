#include<stdio.h>
#include<string.h> // used for string copy

struct employee{

int id;
char name[20];
char work[20];
int salary;

struct employee *idptr;
struct employee *nameptr;
struct employee *workptr;
struct employee *salaryptr;
};


int main(){

struct employee first, second, third;

first.id = 35;
strcpy(first.name, "Navfal");
strcpy(first.work, "CTO");
first.salary = 100000;
first.salaryptr = &third;


second.id = 20;
strcpy(second.name, "Abdullah");
strcpy(second.work, "CEO");
second.salary = 150000;
second.salaryptr = &third;


third.id = 10;
strcpy(third.name, "Abdur Rahman");
strcpy(third.work, "HR Manager");
third.salary = 80000;
third.salaryptr = &second;

int x;

// x starts traveling from one structure to another
x = first.salaryptr ->  salary;
x = second.salaryptr ->  salary;
x = third.salaryptr ->  salary;


printf("CEO is %s", second.name);
printf(" and his salary is %d", second.salary);
printf("\nCTO is %s ", first.name);
printf(" and his salary is %d ", first.salary);

return 0;
}
