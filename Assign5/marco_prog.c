#include<stdio.h>
#define mul(a,b) a*b
void main()
{
        int a,b,result;
        printf("Enter values for a and b: ");
        scanf("%d%d",&a,&b);
        result = mul(a,b);
        printf("Product of a and b is:%d\n",result);
	result = mul(a+2,b+3);
        printf("Incorrect product of a+2 and b+3 is:%d\n",result);
	a=a+2;b=b+3;
	result = mul(a,b);	
        printf("Correct product of a+2 and b+3 is:%d\n",result);
}
