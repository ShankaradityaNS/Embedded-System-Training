//Prog to find bit rep of a char without bitwise op
#include<stdio.h>
void bin(char n)
{
	if(n>1)
		bin(n/2);//we are using a recursive func
	printf("%d",(n%2));
}
int main()
{
	char ch;
	printf("Enter char:");
	scanf("%c",&ch);
	bin(ch);
	printf("\n");
}
