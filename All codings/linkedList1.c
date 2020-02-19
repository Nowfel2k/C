#include<stdio.h>
#include<stdlib.h>


struct node{

int value;
struct node* next;

};

typedef struct node node_t;


int printlist(node_t *head){
    node_t* temporary = head;

    while(temporary!=NULL){
        if(temporary == head){
            printf("HEAD \n|\n|_/-->  %d  -->  ", temporary->value);
            temporary = temporary->next;
        }else{
        printf("%d  -->  ", temporary->value);
        temporary = temporary->next;
        }
    }

    printf("\n");
}




int main(){

node_t n1, n2, n3;
node_t *head;

n1.value = 20;
n2.value = 30;
n3.value = 40;


head = &n1;
n1.next = &n2;
n2.next = &n3;
n3.next = NULL;

node_t n4;
n4.value = 50;
n4.next = &n3;
n2.next = &n4;


head = head->next;

printlist(head);



return 0;
}
