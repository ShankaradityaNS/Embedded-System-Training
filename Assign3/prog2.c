#include<stdio.h>
void printer(int n,int m)
{
 printf("%d ",m);
 if(m<n)
         printer(n,m+1);
}

void main()
{
        int n,m=1;
        printf("Enter number N- ");
        scanf("%d",&n);
        printf("Printing all numbers from 1 to N:\n");
        printer(n,m);
        printf("\n");
}
