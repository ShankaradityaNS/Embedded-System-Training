#include<stdio.h>
void main()
{
	int a[25],len,i,lar,sec_lar;
	printf("Enter length of array:");
	scanf("%d",&len);
	printf("Enter array elements:" );
	for(i=0;i<len;i++)
	{
	 scanf("%d",&a[i]);
	}
	lar = a[0]; sec_lar = 0;
	for(i=0;i<len;i++)
	{
	 if(lar<a[i])
	 {
	  sec_lar = lar;
	  lar = a[i];
	 }
	}
	printf("The second largest number is: %d\n",sec_lar);
}
