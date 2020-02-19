//#include<stdio.h>
//
//void main(){
//
//printf("First Line\n");
//
//goto HERE;
//
//printf("OK");
//printf("OK");
//printf("OK");
//
//HERE: printf("Now I am here!");
//
//}

//
//#include <stdio.h>
//
//int main()
//{
//    unsigned short int i = 65000;
//    while (i!= 0) i++;
//    printf("%d", i);
//    return 0;
//}


//#include <stdio.h>
//main(){
//int i;
//    for ( i=0; i<5; i++ ){
//        static int i = 10; // 10 11 12 13 14 but if NOT STATIC 10 10 10 10 10
//        printf ( "%d ", i );
//        i++;
//
//    }
//}


//#include<stdio.h>
//#define STATEMENT1 printf("IF happen");
//#define STATEMENT2 printf("ELSE happen");
//main(){
//
//    int a=10, b=6, c=8;
//
//    if(a>b)
//    if(b>c)
//    STATEMENT1
//    else STATEMENT2;
//
//}

//#include<stdio.h>
//main(){
//int i=6720, j=4;
//
//while ((i%j)==0){
//    printf("%d\n", j);
//    i=i/j;
//    j=j+1;
//}
//
//printf("%d", j);
//}

//#include<stdio.h>
//main()
//{
//int x[] = {1,2,3,4,5,6,7,8};
//
//for (int i=2; i<6; ++i) x[x[i]]=x[i];
//
//for (int i=0; i<8; ++i) printf(" %d ", x[i]);
//}

// BASIC POINTER
//# include <stdio.h>
//void fun(int* ptr)
//{
//    *ptr = 30;
//}
//
//int main()
//{
//  int* ptr;
//  int y = 20;
//  ptr = &y;
//  fun(ptr);
//  printf("%d", y);
//
//  return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//    float *ptr1 = &arr[0];
//    float *ptr2 = ptr1 + 1;
//
//    printf("%f ", *ptr1);
//    printf("%f \n", *ptr2);
//
//    printf("%d ", ptr1);
//    printf("%d \n", ptr2);
//
//    printf("%d", ptr2-ptr1);
//
//   return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int arr[] = {10, 20, 30, 40, 50, 60};
//    int *ptr1 = arr;
//    int *ptr2 = arr + 5;
//    printf("Number of elements between two pointer are: %d\n",
//                                (ptr2 - ptr1));
//    printf("Number of bytes between two pointers are: %d",
//                              ((char*)ptr2 - (char*) ptr1));
//    return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//   int a;
//   int *x;
//   x = &a;
//   a = 512;
//
//   x[0] = 260;
//   x[1] = 2;
//
//   printf("%d",a);
//   return 0;
//}



//#include<stdio.h>
//int main()
//{
//   int a;
//   char *x;
//   x = (char *) &a;
//
//   a = 20;
//
//   x[0] = 1;
//   x[1] = 2;
//
//   printf("\n%d", a); // 0001 0010 = 513
//   return 0;
//}

//#include<stdio.h>
//void main(){
//
//int a,b,c;
//printf("Enter A, B, C values : ");
//scanf("%d %d %d", &a, &b, &c);
//
//if((c>a)&&(a>b)) printf("A : %d is second largest\n", a);
//else if((b>a)&&(a>c)) printf("A : %d is second largest\n", a);
//
//if((c>b)&&(b>a)) printf("B : %d is second largest\n", b);
//else if((a>b)&&(b>c)) printf("B : %d is second largest\n", b);
//
//if((a>c)&&(c>b)) printf("C : %d is second largest\n", c);
//else if((b>c)&&(c>a)) printf("C : %d is second largest\n", c);
//
//}


#include<stdio.h>
void main(){

int a[] = {};
for(int i=0; i<3; i++) scanf("%d", &a[i]);

for(int i=0; i<3; i++){
    if(a[i]<a[i+1]){
        int temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
    }
}

for(int i=0; i<3; i++) printf("Element %d : %d\n", i,a[i]);



}




























