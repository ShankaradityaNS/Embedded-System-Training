#include<stdio.h>
void main()
{
	char s[25],copy[25],c[25];
	int i=0;
	printf("Enter string:");
	scanf("%s",s);
	while(s[i]!='\0')
		i++;
	printf("Length of string=%d\n",i);
	for(i=0;s[i]!='\0';i++)
	{
		copy[i]=s[i];
	}
	copy[i]='\0';
	printf("Copied String: %s\n",copy);
	printf("Enter string for comparision:");
	scanf("%s",c);
	int comp= compare(s,c); // calling compare() function  
        if(comp==0) 
	       printf("strings are same\n");
        else
	      printf("strings are not same\n");  
}
int compare(char a[],char b[])  
{  
    int flag=0,i=0;    
    while(a[i]!='\0' &&b[i]!='\0')    
    {  
       if(a[i]!=b[i])  
       {  
           flag=1;  
           break;  
       }  
       i++;  
    }  
    if(flag==0)  
    return 0;  
    else  
    return 1;  
}  
