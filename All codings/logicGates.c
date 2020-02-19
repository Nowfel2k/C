#include<stdio.h>
int And(int a, int b);
int Or(int a, int b);
int Not(int a);
int join(int a, int b);

int OrThree(int a, int b, int c);

void main() {


    int a, b, c, d;
    printf("Enter values of abcd gates : ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // AB + not(BC) + AD
    int ab = join(a, b);

    int bc = join(b, c);

    int _bc = Not(bc);

    int ad = join(a, d);

    int result = OrThree(ab, _bc, ad);

    printf("AB = %d\nBC = %d  _BC = %d\nAD = %d\n", ab, bc, _bc, ad);
    printf("AB || _BC || AD = %d\n", result);

    printf("\n\n");





    main();



}



int And(int a, int b)
{
 int output;
 if(a==0 && b==0)
  output=0;
  if(a==1 && b==0)
  output=0;
 if(a==0 && b==1)
  output=0;
 if(a==1 && b==1)
  output=1;
 return (output);
}


int Or(int a, int b)
{
 int output;
 if(a==0 && b==0)
  output=0;
  if(a==1 && b==0)
  output=1;
 if(a==0 && b==1)
  output=1;
 if(a==1 && b==1)
  output=1;
 return (output);
}


int OrThree(int a, int b, int c) {

    if(a == 1 || b == 1 || c == 1) return 1;
    else return 0;


}








int Not(int a)
{
int output;
 if(a==0 )
  output=1;
 if(a==1 )
  output=0;
  return (output);
}

int join(int a, int b) {

    int output;
    if(a==0 && b==0) output=0;
    if(a==1 && b==0) output=0;
    if(a==0 && b==1) output=0;
    if(a==1 && b==1) output=1;
    return (output);
}
