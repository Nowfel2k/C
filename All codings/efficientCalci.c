#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main() {

    char input[50];


    scanf("%s", input);


    for(int i=0; input[i]!='\0'; i++){
        printf("%c", input[i]);
    }

    return 0;

}
