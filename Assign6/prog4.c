#include<stdio.h>
static inline max(int a, int b)
{
	return (a>b)?a:b;
}
void main()
{
	int a[5]={1,2,3,4,5};
	int sum=0,n=5,max_sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
		max_sum=max(max_sum,sum);
	}
	printf("Max sub sum is:%d\n",max_sum);
}
