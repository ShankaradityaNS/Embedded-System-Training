//prog to set and clear bit at given position
#include<stdio.h>
#define bitset(byte, nbit) (byte|(1<<(nbit)))
//if bit is 0 sets to 1 else no changes
#define bitclear(byte, nbit) (byte&=~(1<<nbit))
//clears bit at given location
#define toggle_bit(byte,nbit) (byte^=(1<<nbit))
void main()
{
        int num,bit_pos_clear,bit_pos_set,bit_pos_tog;
        printf("Enter Number: ");
        scanf("%d",&num);
        printf("Enter Bit Position to set,clear and toggle: ");
        scanf("%d",&bit_pos_clear);
        scanf("%d",&bit_pos_set);
	scanf("%d",&bit_pos_tog);
        printf("The set bit is:%d\n",bitset(num,bit_pos_set));
        printf("The cleared bit is:%d\n",bitclear(num,bit_pos_clear));
	printf("The toggled bit is:%d\n",toggle_bit(num,bit_pos_tog));
}


