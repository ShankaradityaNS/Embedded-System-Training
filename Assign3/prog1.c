#include<stdio.h>
void printer(int n)
{
 printf("%d ",n);
 if(n>1)
	 printer(n-1);
}

void main()
{
	int n;
	printf("Enter number N- ");
	scanf("%d",&n);
	printf("Printing all numbers from N to 1:\n");
	printer(n);
	printf("\n");
}

