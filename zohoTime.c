//#include <stdio.h>
//#define PRINT(i, limit) while(i++ <= limit) \
//						{ \
//						    printf("%d", i);\
//							printf("GeeksQuiz\n");\
//						}
//
//int main()
//{
//	int i = 1;
//	PRINT(i, 5);
////	return 0;
////}
//
//#include <stdio.h>
//#define EVEN 0
//#define ODD 1
//int main()
//{
//    int i = 4;
//    switch (i & 1)
//    {
//        case EVEN: printf("Even");
//                break;
//        case ODD: printf("Odd");
//                break;
//        default: printf("Default");
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int i;
//    if (printf(""))
//        i = 3;
//    else
//        i = 5;
//    printf("%d", i);
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int i;
//    if (i) printf("if occurs i : %d", i);
//    else printf("Else occurs i : %d", i);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//   int n;
//   for (n = 9; n>0; --n)
//     printf("\nn = %d", --n);
//   return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int c = 5, a = 10;
//    int count=1;
//    while(c>0) {
//        printf("Execution %d\n", count);
//        a = a/c;
//        count++;
//        c--;
//    }
//
//    printf ("\nValue of A : %d", a);
//    return 0;
//}

//
//# include <stdio.h>
//int main()
//{
//   int i = 0;
//   for (i=0; i<20; i++)
//   {
//     printf("%d  ", i);
//     switch(i)
//     {
//       case 0:
//         i += 5;
//       case 1:
//         i += 2;
//       case 5:
//         i += 5;
//       default:
//         i += 4;
//         break;
//     }
//     printf("%d  ", i);
//   }
//   return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (printf("1st\n"); i < 2 && printf("2nd\n"); ++i && printf("3rd\n"))
//    {
//        printf("*\n");
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    switch(i)
//    {
//
//        case 1: printf("Geeks");
//                printf("Outside ");
//        case 2: printf("Quiz");
//                break;
//        default: printf("GeeksQuiz");
//    }
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//    float check = 1.2;
//    switch (check)
//    {
//        case 1.1: printf("Geeks ");
//
//        case 1.2: printf("Quiz ");
//                break;
//        default: printf("GeeksQuiz");
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int j = 100;
//    int i = 3;
//    while (--i)
//    {
//
//        j--;
//        printf("%d ", j);
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int a = 5;
//    switch(a)
//    {
//    case 6:
//        a--;
//    case 5:
//        a = a+1;
//    case 1:
//        a = a-1;
//        break;
//    default:
//        a = 4;
//    }
//    printf("%d", a);
//    return 0;
//}
//
//
//#include <stdio.h>
//int size=0, q=0;
//int B[20];
//int fun (int x, int y)
//{
//    switch (x)
//    {
//    case -1:
//        printf("\n\nCase -1");
//        printf("\nSize %d   Q %d  ", size, q);
//        size = y;
//        break;
//    case 0:
//        printf("\n\nCase 0");
//        printf("\nSize %d   Q %d  ", size, q);
//        if (q < size ) B[q++]=y;
//        break;
//    default:
//        printf("\n\nCase Default");
//        printf("\nSize %d   Q %d  ", size, q);
//        if (q) return B[--q];
//    }
//    return -1;
//}
//int main()
//{
//    fun (-1, 10);
//    fun (0, 5);
//    fun (0, 10);
//    printf ("\n%d", fun(1, 0)+fun(1, 0));
//}
















