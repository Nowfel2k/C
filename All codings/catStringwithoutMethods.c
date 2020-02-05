#include<stdio.h>

void main(){

char word1[50], word2[50];


printf("Word 1 : ");
gets(word1);


printf("Word 2 : ");
gets(word2);

int len=0;
for(int i=0; word1[i]!='\0'; i++){
    len++;
}


int absoluteLen=len;
int j=0;
for(int i=len; word2[j]!='\0'; i++){
    word1[i] = word2[j];
    j++;
    absoluteLen++;
}

word1[absoluteLen] = '\0';

printf("\nConcatenated result : %s", word1);









}
