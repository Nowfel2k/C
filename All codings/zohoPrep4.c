#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<windows.h>
#include<time.h>


// Main coding starts :


//void f(int *p, int *q){
//  p = q;
//  *p = 2;
//}
//
//main(){
//  int i = 0, j = 1;
//  f(&i, &j);
//  printf("%d %d ", i, j);
//}


//
//void swap(int *p1, int *p2)
//{
//   int temp;
//   temp = *p1;
//   *p1 = *p2;
//   *p2 = temp;
//}
//main(){
//
//int a=152,b=267;
//
//int* ptr1=&a;
//int* ptr2=&b;
//
//printf("%d %d\n",a,b); // 1 2
//swap(ptr1,ptr2);
//printf("%d %d\n",a,b); // 2 1
//
//
//}



//int f(int c, int *b, int **a)
//{
//  int d, e;
//  **a += 1;
//   e  = **a;
//  *b += 2;
//   d = *b;
//   c += 3;
//   return c + d + e;
//}
//
//void main()
//{
//   int c, *b, **a;
//   c = 4;
//   b = &c;
//   a = &b;
//   printf("%d ", f(c, b, a));
//   return 0;
//}



//main()
//{
//    int a = 12;
//    void *ptr = (int *)&a;
//    printf("%d", *(int *)ptr);
//}

//
//void swap (char *x, char *y)
//{
//    char *t = x;
//    x = y;
//    y = t;
//    printf("%s %s\n", x,y);
//}
//
//
//int main()
//{
//    char *x = "geeksquiz";
//    char *y = "geeksforgeeks";
//    char *t;
//    swap(x, y);
//    printf("(%s, %s)", x, y);
//    t = x;
//    x = y;
//    y = t;
//    printf("\n(%s, %s)", x, y);
//    getchar();
//    return 0;
//}



//swapValuesWithPointers(int *p, int *q){
//int temp;
//temp = *p;
//*p = *q;
//*q = temp;
//
//}
//
//swapValues(int a, int b){
//int t;
//t = a;
//a = b;
//b = t;
//
//
//}
//
//main(){
//
//int a=20, b=40;
//
//printf("%d %d\n", a,b);
//
//int *p = &a;
//int *q = &b;
//
//swapValues(a,b);
//swapValuesWithPointers(p,q);
//
//printf("%d %d\n", a,b);
//
//
//}


//main(){
//
//char name[] = {'N', 'A', 'V', 'F', 'A', 'L'};
////char name[] = {"N", "A", "V", "F", "A", "L"};
//
//for(int i=0; i<=5; i++){
//    for(int j=0; j<=i; j++){
//        printf(" %c ", name[j]);
//        }
//    printf("\n");
//    }
//
//}


//int main()
//{
//    char *pointerArray[] = { "ab", "cd", "ef", "gh", "ij", "kl" };
//    f(pointerArray);
//    return 0;
//}
//void f(char **p)
//{
//    char *t;
//    t = (p += sizeof(int))[-1];
//    printf("%s", t);
//}


//
//#include <stdio.h>
//#define print(x) printf("%d ", x)
//int x;
//void Q(int z)
//{
//    z += x;
//    print(z);
//}
//void P(int *y)
//{
//    int x = *y + 2;
//    Q(x);
//    *y = x - 1;
//    print(x);
//}
//main(void)
//{
//    x = 5;
//    P(&x);
//    print(x);
//}


void fun(int *p1, int *p2){

    int sum;
    printf("Two pointers : %p %p \n", p1, p2);
    sum = *p1 + *p2;
    printf("Sum : %d\n", sum);

}


int main(){


    int a=2, b=5;
    int *ptr1, *ptr2; // Proper declaration of 2 integer pointers
    ptr1 = &a;
    ptr2 = &b;

    int* ptrA, ptrB; // Bad declaration of integer pointers
    ptrA = &a;
    ptrB = &b;

    fun(ptrA, ptrB);


//    printf("%p %p", ptrA, ptrB); // 0029FEFC 0029FEF8


    return 0;
}




