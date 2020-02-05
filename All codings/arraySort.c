#include<stdio.h>

int main(){

int a[20]={};
int b[20]={};
int numA, numB;


// ENTERING ELEMENTS OF A ARRAY
printf("Enter limit of A array elements : ");
scanf("%d", &numA);

for(int k=0; k<numA; k++)
{
    scanf("%d", &a[k]);

}

// ENTERING ELEMENTS OF B ARRAY
printf("\nEnter limit of B array elements : ");
scanf("%d", &numB);

for(int k=0; k<numB; k++)
{
    scanf("%d", &b[k]);
}

printf("\nTest1");
// COUNTING ELEMENTS OF A ARRAY FOR FUTURE USE
int count=0, i=0;
for(int l=0; a[l]!=NULL; l++){
    count++;
    i++;
}
printf("\ncount : %d",count);

printf("\nTest2");
// COMBINING A AND B INTO ONE SINGLE LIST
for(int j=0; b[j]!=NULL ; j++)
    {
        a[i] = b[j];
        i++;
    }


// PRINTING ELEMENTS OF THE COMBINED LIST
printf("\nElements of A[] : \n");
for(int j=0; a[j]!=NULL; j++)
{

    printf("%d\n", a[j]);
}

printf("\n\nTest3");
// SORTING THE ELEMENTS IN INCREASING ORDER
int temp=0;
for(int i=0; a[i]!=NULL; i++)
    {
    for(int j=0; a[j]!=NULL; j++)
    {
        if(a[i]<a[j])
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}


// PRINTING ELEMENTS OF THE SORTED LIST
printf("Elements of A[] : \n");
for(int j=0; a[j]!=NULL; j++)
{

printf("%d\n", a[j]);
}

printf("\nTest4");
}
