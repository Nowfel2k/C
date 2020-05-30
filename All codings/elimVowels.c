#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LIMIT

void consonants(char str[]) {


    char vowels[6] = {'a', 'e', 'i', 'o', 'u'};

    int len = strlen(str);

    int check = 1;

    printf("\ncheck %d\n", check);
    check++;

    for(int i = 0 ; str[i] != '\0' ; i++) {


    printf("\ncheck %d\n", check);
    check++;

        for(int j = 0 ; vowels[j] != '\0'; j++) {
            if(str[i] == vowels[j]) {

                for(int x = i ; x < len - 1 ; x++) {
                    str[x] = str[x+1];
                }

                len--;






            }
        }

printf("\ncheck %d\n", check);
    check++;

    }


        for(int s = 0 ; s < len ; s++) {
                printf("\ncheck %d\n", check);
    check++;
            printf("%c", str[s]);
        }











    /*
    for(int i = 0 ; str[i] != '\0' ; i++) {

        for(int j = 0 ; vowels[j] != '\0'; j++) {
            if(str[i] == vowels[j]) {
                str[i] = '1';
            }
        }


        if(str[i] != '1')
            printf("%c", str[i]);
    }

    */

}



int main() {

    consonants("qwioeuasidamsmzxnncakwiqw");

    return 0;
}
