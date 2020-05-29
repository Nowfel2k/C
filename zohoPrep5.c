//#include <stdio.h>
//int main()
//{
//    int a[5] = {1,2,3,4,5};
//    int *ptr = &a+1;
//    printf("%d %d", *(a+1), *(ptr-1));
//    return 0;
//}


//#include <stdio.h>
//
//char* c[] = {"GeeksQuiz", "MCQ", "TEST", "QUIZ"};
//char** cp[] = {c+3, c+2, c+1, c};
//char*** cpp = cp;
//
//int main()
//{
//    printf("%s \n", **++cpp);
//    printf("%s \n", *--*++cpp+3);
//    printf("%s \n", *cpp[-2]+3);
//    printf("%s \n", cpp[-1][-1]+1);
//    return 0;
//}


//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//void fun(char** str_ref)
//{
//    (*str_ref)++;
//}
//
//int main()
//{
//    char *str = (void *)malloc(100*sizeof(char));
//    strcpy(str, "GeeksQuiz");
//    fun(&str);
//    puts(str);
//    free(str);
//    return 0;
//}


//#include <stdio.h>
//void f(char**);
//int main()
//{
//    char *argv[] = { "ab", "cd", "ef", "gh", "ij", "kl" }; // (p+=size)[0]=ij // p[0]=ab //
//    f(argv);
//    return 0;
//}
//void f(char **p)
//{
//    char *t;
//    t = (p+=sizeof(int))[1]; // (p+4)[1] => p+4+1 => p+5 => print KL
//    printf("%s", t);
//}


//#include <stdio.h>
//int main()
//{
//    int a[5] = {10,20,30,40,50};
//    int *ptr = &a+1;
//    printf("%d %d", *(a+1), *(ptr-2)); // OUTPUT : 2 5
//    printf(" %d ", a[2]);
//    return 0;
//}


#include <stdio.h>

int main()
{
    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 4;

    printf("%f ", *ptr2);
    printf("%d", ptr2 - ptr1);

   return 0;
}
















