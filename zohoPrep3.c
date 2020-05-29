#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<windows.h>
#include<time.h>


// Main coding starts :


//
//int main()
//{
//  int x,y,z;
//  printf("\n\nEnter the three inputs: ");
//  scanf("%d %d %d", &x,&y,&z);
//
//  if(x>y && x>z){
//
//    if(y>z)
//        printf("Second largest Number is %d ", y);
//    else
//    printf("Second largest Number is %d ", z);
//  }
//
//  else if (y>x && y>z){
//    if(x>z)
//        printf("Second largest Number is %d ", x);
//    else
//        printf("Second largest Number is %d ", z);
//  }
//
//  else if (z>x && z>y){
//    if(x>y)
//        printf("Second largest Number is %d ", x);
//    else
//        printf("Second largest Number is %d ", y);
//  }
//
//  else if(x==y) printf("Two inputs X and Y are same. Second largest Number is %d ", x);
//  else if(x==z) printf("Two inputs X and Z are same. Second largest Number is %d ", x);
//  else if(z==y) printf("Two inputs Y and Z are same. Second largest Number is %d ", y);
//
//
//
//
//  main();
//
//}


//int main()
//{
// char word[10] = "Hello";
// int *ptr = &word[10];
// printf("%s", *ptr);
// return 0;
//}


//void fun(int arr[], int arr_size) {
//    int i;
//    for (i = 0; i < arr_size; i++) printf("%d ", arr[i]);
//}
//
//int main() {
//    int i, count=0;
//    int arr[5] = {10, 20 ,30, 40};
//
////    Use of sizeof is fine here
////    size_t n = sizeof(arr)/sizeof(arr[0]);
//
//    for(int i=0; arr[i]; i++) count++;
//
//    printf("%d\n",count);
//    fun(arr, count);
//    return 0;
//}


void main(){

 int a,b;
 a=4;
 b=4;

 b=a++;

 int test1 = a++;
 int test2 = --b;
 int test3 = ++a;
 int test4 = b--;

 printf("%d %d %d %d\n", test1,test2,test3,test4); // output: 5 3 7 3
 // a=5 b=4
 printf("%d %d %d %d", a++, --b, ++a, b--); // 6 2 7 4

}



















































