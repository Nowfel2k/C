#include<stdio.h>
#include<string.h>
void main(){

char word[12];

strcpy(word, "No");

if(strcmp(word, "Yes")==0) printf("\nEquals YES");
if(strcmp(word, "No")==0) printf("\nEquals NO");


}
