//Prog to perform matrix multiplication on 2 D matrices
#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],prod[10][10],r,c,i,j,k;
	printf("Enter dimensions of matrix 1 and 2:");
	scanf("%d%d",&r,&c);
	printf("Enter elements of matrix 1:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Enter elements of matrix 2:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
	 for(j=0;j<c;j++)
	 {
          prod[i][j]=0;
	  for(k=0;k<c;j++)
	  {
	   prod[i][j]+=a[i][k]*b[k][j];
	  }
	 }
	}
	printf("Product is:\n");
        for(i=0;i<r;i++)
        {
         for(j=0;j<c;j++)
         {
	  printf("%d ",a[i][j]);
         }
	 printf("\n");
        }
}
	


