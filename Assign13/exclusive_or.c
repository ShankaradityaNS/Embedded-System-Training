//Program to find exclusive or for all elements of array
#include<stdio.h>
#define exclusive_or_op(byte1,byte2,res) (res=byte1^byte2)
void main()
{
	int i,no1,no2,res=0;
	int arr[] = {20,20,40,40,13,13,11,88,88,98,98,99,11,11};
	for(i=0;i<(sizeof(arr)-1);i++)
	{
		res=exclusive_or_op(arr[i],arr[i+1],res);
	}
		printf("%d\n",res);
}
