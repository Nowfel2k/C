#include<stdio.h>

int count=0;

int get(int n){
count++;

if(n<1) return;

get(n-1);
get(n-3);


return n;
}


int main(){

get(2);
printf("%d", count);

return 0;
}
