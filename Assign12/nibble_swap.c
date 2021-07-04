#include<stdio.h>
int bin(int n)
{
	if(n==0)
		return 0;
	else
		return ((n%2)+10*bin(n/2));
}
int main()
{
        int no,part,res;
        printf("Enter no:");
        scanf("%d",&no);
	printf("Given no:%d\n",bin(no));
	part=no%10;
	no=(part*10)+no/10;
	printf("After swapping nibbles:");
	printf("%d",bin(no));
        printf("\n");
}

