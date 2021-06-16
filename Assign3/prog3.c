#include<stdio.h>
int binary=0;
void dec_2_bi(int no)
{
	binary =(binary*10)+ no%2;
	no = no/2;
	if(no>0)
		dec_2_bi(no);
}
void main()
{
	int no,res=0,rem;
	printf("Enter number to be converted to binary: ");
	scanf("%d",&no);
  	dec_2_bi(no);
	while(binary!=0)
	{
		rem = binary%10;
		res = res*10 +rem;
		binary = binary/10;
	} 
	printf("Binary No of %d is %d\n",no,res);	
}
