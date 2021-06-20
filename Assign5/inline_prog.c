#include<stdio.h>
static inline int mul(int a, int b)
{
	return a*b;
}
void main()
{
	int a,b,prod;
	printf("Enter value for a and b:");
	scanf("%d%d",&a,&b);
	prod = mul(a,b);
	printf("Product of a and b=%d\n",prod);
	prod = mul(a+2,b+3);
	printf("Product of a+2 and b+3=%d\n",prod);
}
