#include<stdio.h>
#include<string.h>
void mem_copy(void *dest,void *src,size_t n)
{
	int i;
	char *src_char=(char *)src;
	char *dest_char=(char *)dest;
	for(i=0;i<n;i++)
		dest_char[i]=src_char[i];
}
void main()
{
	char src[]="hello World";
	char dest[100];
	mem_copy(dest,src,strlen(src)+1);
	printf("The copied string is %s\n",dest);
	int arr[]={10,20,30,40,50,60,70,80,90};
	int n=sizeof(arr)/sizeof(arr[0]);
	int dest_arr[n],i;
	mem_copy(dest_arr,arr,sizeof(arr));
	printf("The copied array is");
	for(i=0;i<n;i++)
		printf("%d ",dest_arr[i]);
	printf("\n");
}
