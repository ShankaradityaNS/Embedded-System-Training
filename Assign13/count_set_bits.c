//Prog to count number of times we set the bit
#include<stdio.h>
int countsetbit(int no)
{
        int count=0;
        while(no)
        {
                count+=no&1;//increamenting and setting bit
                no=no>>1;//right shifting to remove previous bit
        }
        return count;
}
void main()
{
	int no,bit_pos,count;
	printf("Enter number:");
	scanf("%d",&no);
        count=countsetbit(no);
	printf("number of count bit=%d\n",count);
}
