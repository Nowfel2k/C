 #include<stdio.h>
void main() {
signed int a;
scanf("%d", &a);
printf("Factors of %d are : ", a);
for(int i=2; i<100; i++){
if(a%i==0) printf("\n%d", i);
}
}
