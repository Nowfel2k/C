#include<stdio.h>
#include<string.h>
#include<windows.h>
#define print printf

struct signal{

char straight[7];
char right[7];

};


typedef struct signal block;


void firstProgress(){
block a,b,c,d;
strcpy(a.straight,"Green");
strcpy(a.right,"Red");
strcpy(c.straight,"Green");
strcpy(c.right,"Red");
strcpy(b.straight, "Red");
strcpy(b.right, "Red");
strcpy(d.straight, "Red");
strcpy(d.right, "Red");

print("\nA signal (straight) : %s", a.straight);
print("\nA signal (right) : %s", a.right);
print("\n\nC signal (straight) : %s", c.straight);
print("\nC signal (right) : %s", c.right);
print("\n\nB signal (straight) : %s", b.straight);
print("\nB signal (right) : %s", b.right);
print("\n\nD signal (straight) : %s", d.straight);
print("\nD signal (right) : %s\n\n\n", d.right);

}


void secondProgress(){
block a,b,c,d;
strcpy(a.straight,"Red");
strcpy(a.right,"Green");
strcpy(c.straight,"Red");
strcpy(c.right,"Green");
strcpy(b.straight, "Red");
strcpy(b.right, "Red");
strcpy(d.straight, "Red");
strcpy(d.right, "Red");

print("\nA signal (straight) : %s", a.straight);
print("\nA signal (right) : %s", a.right);
print("\n\nC signal (straight) : %s", c.straight);
print("\nC signal (right) : %s", c.right);
print("\n\nB signal (straight) : %s", b.straight);
print("\nB signal (right) : %s", b.right);
print("\n\nD signal (straight) : %s", d.straight);
print("\nD signal (right) : %s\n\n\n", d.right);
}

void thirdProgress(){
block a,b,c,d;
strcpy(a.straight,"Red");
strcpy(a.right,"Red");
strcpy(c.straight,"Red");
strcpy(c.right,"Red");
strcpy(b.straight, "Green");
strcpy(b.right, "Green");
strcpy(d.straight, "Red");
strcpy(d.right, "Red");


print("\nA signal (straight) : %s", a.straight);
print("\nA signal (right) : %s", a.right);
print("\n\nC signal (straight) : %s", c.straight);
print("\nC signal (right) : %s", c.right);
print("\n\nB signal (straight) : %s", b.straight);
print("\nB signal (right) : %s", b.right);
print("\n\nD signal (straight) : %s", d.straight);
print("\nD signal (right) : %s\n\n\n", d.right);
}

void fourthProgress(){
block a,b,c,d;
strcpy(a.straight,"Red");
strcpy(a.right,"Red");
strcpy(c.straight,"Red");
strcpy(c.right,"Red");
strcpy(b.straight, "Red");
strcpy(b.right, "Red");
strcpy(d.straight, "Green");
strcpy(d.right, "Green");


print("\nA signal (straight) : %s", a.straight);
print("\nA signal (right) : %s", a.right);
print("\n\nC signal (straight) : %s", c.straight);
print("\nC signal (right) : %s", c.right);
print("\n\nB signal (straight) : %s", b.straight);
print("\nB signal (right) : %s", b.right);
print("\n\nD signal (straight) : %s", d.straight);
print("\nD signal (right) : %s\n\n\n", d.right);
}



int main(){

block a,b,c,d;

// First Process
firstProgress();
printf("Press key to move to next phase");
getchar();

// Second Process
secondProgress();
printf("Press key to move to next phase");
getchar();

// Third Process
thirdProgress();
printf("Press key to move to next phase");
getchar();

// Fourth Process
fourthProgress();
printf("Press key to move to next phase");
getchar();

main();
return 0;
}
