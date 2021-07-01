//Prog to find whether no is odd or even
#include<stdio.h>
#define check(byte,bit) (bit=byte&1) //checking if last bit is 1 or 0
void main()
{
	int no,bit=0;
	printf("enter number:");
	scanf("%d",&no);
	bit=check(no,bit);
	if(bit==1)
	{
		printf("Odd number\n");
	}
	else
	{
		printf("Even number\n");
	}
}
