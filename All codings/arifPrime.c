#include<stdio.h>
int main()
{
    int n,i,flag;
    printf("\nEnter The Number:");
    scanf("%d",&n);
    for (i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
    }
    if(n==1)
    {
        printf("\n %d is not prime",n);
    }
    else {
        if(flag==1)
            printf("\n%d is a not Prime Number ",n);
        else{
            printf("\n %d is  a Prime Number",n);

            prev(n);
            next(n);
        }
    }

    return 0;
}

prev(int a)
{
    for( int i=2;i<=a/2;--a)
 {
        if(a%i==0)
        printf("\n%d is the previous prime number",a);
        return 0;
 }
}
next(int b)
{
    for(int i=2;i<=b/2;++b)
 {
        if(b%i==0)
        printf("\n%d is the next prime number",b);
        return 0;
 }
}
