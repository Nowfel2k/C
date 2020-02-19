#include<stdio.h>
#include<string.h>

int main(){

    char word[100];
    int c = 0;
    int count[26] = {0};
    int x;

    printf("Enter word : ");
    gets(word);

    while(word[c]!='\0'){
        if((word[c]>='a')&&(word[c]<='z')){
            x = word[c]-'a';
            count[c]++;
        }
        c++;
    }

    for(c=0; c<26; c++)
        printf("%c occurs %d times in the word.\n", (c+'a'),count[c]);



    return 0;
}
