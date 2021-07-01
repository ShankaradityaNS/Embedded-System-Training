//Prog to check if number is a power of 2
#include<stdio.h>
#define check(byte) (byte&(byte-1)) 
void main()
{
	int no;
	printf("Enter number:");
	scanf("%d",&no);
	if(check(no))
	{
		printf("Number is not a power of 2\n");
	}
	else
	{
		printf("Number is a power of 2\n");
	}
}
