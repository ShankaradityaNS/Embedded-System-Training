//prog to set and get bit at given position
#include<stdio.h>
#define bitset(byte, nbit) (byte|(1<<(nbit)))
//if bit is 0 sets to 1 else no changes
#define bitget(byte, nbit) (byte=(byte>>nbit)&1)
//gives bit at given location
void main()
{
	int num,bit_pos_get,bit_pos_set;
	printf("Enter Number: ");
	scanf("%d",&num);
	printf("Enter Bit Position to set and get: ");
	scanf("%d",&bit_pos_get);
	scanf("%d",&bit_pos_set);
	printf("The set bit is:%d\n",bitset(num,bit_pos_set));
	printf("The get bit is:%d\n",bitget(num,bit_pos_get));
}
