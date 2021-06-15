#include<stdio.h>
#include<string.h>
void main()
{
	char password[20];
	int len,i;
	printf("Enter password; ");
	scanf("%s",password);
	len = strlen(password);
	for(i=0;i<len;i++)
	{
		printf("x");
	}
	printf("\n");
}
