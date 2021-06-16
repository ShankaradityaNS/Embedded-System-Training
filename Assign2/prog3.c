    #include<stdio.h>  
     int main()    
    {    
    int n,sum=0,temp=0;    
    printf("Enter a number:");    
    scanf("%d",&n);    
    while(n>9)
    {
    sum =summation(n);
    n=sum;
    temp = temp+sum;
    }
    printf("Sum is=%d\n",temp);    
    return 0;  
    }
 int summation(int n)
 {
    int sum=0,m;
    while(n>0)
    {
    m=n%10;
    sum=sum+m;
    n=n/10;
    }
    return sum;
 }
