#include<stdio.h>

int main() {

    FILE *fp;

    fp = fopen("c:\tc\file.c", "r");

    if(fp==NULL) printf("FAILED");
    else printf("SUCCESS");

    fclose(fp);

    return 0;

}
