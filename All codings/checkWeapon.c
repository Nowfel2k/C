#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){

char item[20];

printf("\nEnter Item : ");
gets(item);

for(int i = 0; item[i]; i++){
    item[i] = tolower(item[i]);
    }

if(strcmp(item, "gun")==0)                                         printf("Gun detected");
else if(strcmp(item, "bomb")==0)                                   printf("Bomb Detected");
else if((strcmp(item, "knife")==0)||(strcmp(item, "sword")==0))    printf("Weapon Detected");
else printf("NIL");


}


#include<stdio.h>

int main()
{
    char a[20];
    printf("\n Enter the Item:");
    scanf("%d",a);

      switch(a)
      {
        case "gun": printf("\nALERT");
        break;
        case "knife": printf("\nALERT");
        break;
        default: printf("\nNULL");

      }
}
















