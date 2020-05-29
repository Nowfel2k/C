#include<stdio.h>
int main() {
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    num = (char) num;

    printf("%d is the entered number", num);

    char word[30];
    printf("\nEnter word : ");
    scanf("%s", word);

    for(int i=0; word[i]!='\0'; i++) word[i] = (int) word[i];

    printf("%d %s", word, word);

    return 0;
}
