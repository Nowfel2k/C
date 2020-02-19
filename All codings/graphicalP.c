#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
void menu();
void ins();
void ply();
void ext();

void main()
{
for(;;)
menu();
}
//end of main

void menu()
{
char ans;
clrscr();
delay(7000);
printf("\n\n\t\t\t\tWELCOME\n\t\t\t=====================\n");
delay(7000);
printf("\n\t\t\t1. Instructions");
delay(7000);
printf("\n\n\t\t\t2. Play");
delay(7000);
printf("\n\n\t\t\t3. Exit");
delay(7000);
printf("\n\n\n\n\tEnter your choice 1/2/3 : ");
ans=getche();
switch(ans)
{
case '1':
ins();
break;
case '2':
ply();
break;
case '3':
ext();
break;
default :
delay(7000);
printf("\n\n\t\twrong input try again");
delay(20000);
menu();
break;
}
}
//end of menu

void ins()
{
clrscr();
delay(7000);
printf("\n\t\t Press the following keys while playing \n");
delay(7000);
printf("\n\n\t\t\t W --> SA ");
delay(7000);
printf("\n\n\t\t\t E --> RE ");
delay(7000);
printf("\n\n\t\t\t R --> GA ");
delay(7000);
printf("\n\n\t\t\t T --> MA ");
delay(7000);
printf("\n\n\t\t\t Y --> PA ");
delay(7000);
printf("\n\n\t\t\t U --> DH ");
delay(7000);
printf("\n\n\t\t\t I --> NI ");
delay(7000);
printf("\n\n\t\t\t O --> SA ");
delay(7000);
printf("\n\n\t\t\t Q --> QUIT ");
delay(7000);
printf("\n\n\t\t\t P --> PAUSE ");
delay(7000);
printf("\n\n\t Press any key .......");
getch();
}
//end of ins

void ext()
{
clrscr();
delay(7000);
printf("\n\n\n\n\n\n\n\t\t\t Thanks for using......");
delay(7000);
printf("\n\n\n\t\t\t Exiting...plz wait....");
delay(40000);
exit(0);
}
//end of ext

void ply()
{
char key;
int x,y;
clrscr();
printf("\tKeep pressing keys\t\tp --> pause \t\t q --> quit");
for(;;)
{
gotoxy(35,12);
key=getche();
switch(key)
{
case 'w':
case 'W':
nosound();
sound(240);
printf(" --> SA");
break;
case 'e':
case 'E':
nosound();
sound(270);
printf(" --> RE");
break;
case 'R':
case 'r':
nosound();
sound(300);
printf(" --> GA");
break;
case 't':
case 'T':
nosound();
sound(320);
printf(" --> MA");
break;

case 'y':
case 'Y':
nosound();
sound(360);
printf(" --> PA");
break;
case 'u':
case 'U':
nosound();
sound(400);
printf(" --> DH");
break;

case 'i':
case 'I':
nosound();
sound(450);
printf(" --> NI");
break;
case 'o':
case 'O':
nosound();
sound(256);
printf(" --> SA");
break;

case 'q':
case 'Q':
nosound();
menu();
break;
default:
nosound();
printf("\bPaused ");
continue;
}
}
}
//end of ply
