#include<stdio.h>
#include<string.h>

int main() {

    char a[50];
    printf("Enter word : "); gets(a);

    int count;
    for(int i=0; a[i]!='\0'; i++){
       count=i;
       if(a[i]=='a'){
            while(a[count]!='\0'){
                a[count] = a[count + 1];
                count++;
            }
       }
    }


    if



    printf("%s", a);



    return 0;

}
