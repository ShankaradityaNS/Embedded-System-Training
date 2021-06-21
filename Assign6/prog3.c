#include<stdio.h>
void main()
{
	int a[25],len,i,j,temp;
	printf("Enter length of array:");
	scanf("%d",&len);
	printf("Enter elements of array:");
	for(i=0;i<len;i++)
	{
	 scanf("%d",&a[i]);
	}
	for(i=0,j=(len-1);i<(len/2);i++,j--)
	{
		temp = a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("Left shifted array is:");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}





