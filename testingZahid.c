#include <stdio.h>
#include <string.h>

void main() {

    char str1[20];
    char str2[20];

    scanf("%s", str1);
    scanf("%s", str2);

    int value = !strcmpi(str1, str2);
    printf("%d\n", value);

    char newStr[20];

    scanf("%s", newStr);

    strcpy(newStr, str1);

    printf("\n%s", newStr);

}
