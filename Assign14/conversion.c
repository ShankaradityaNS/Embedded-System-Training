#include<stdio.h>
#include<string.h>
void hex2bin()
{
	char *hexlist[16]={"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","111"};
	char hexdig[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	char hexno[10],bin_no[40];
	printf("Enter hexadecimal number:");
	scanf("%s",hexno);
	for(int i=0;hexno[i]!='\0';i++)
	{
		for(int j=0;j<16;j++)
		{
			if(hexno[i]==hexdig[j])
			{
				strcat(bin_no,hexlist[j]);
			}
		}
	}
	printf("Binary number is:%s\n",bin_no);
}
void bin2hex()
{
	int bin_no,hex_no=0,i=1,rem;
	printf("Enter binary number:");
	scanf("%d",&bin_no);
	while(bin_no!=0)
	{
		rem=bin_no%10;
		hex_no=hex_no+rem*i;
		i=i*2;
		bin_no=bin_no/10;
	}
	printf("Hexadecimal Number is:%x\n",hex_no);
}
int hex_to_int(char c){
        int first = c / 16 - 3;
        int second = c % 16;
        int result = first*10 + second;
        if(result > 9) result--;
        return result;
}
int hex_to_ascii(char c, char d)
{
        int high = hex_to_int(c) * 16;
        int low = hex_to_int(d);
        return high+low;
}
void hex2asci()
{
	char hex[10];
        printf("Enter hexadecimal value:");
	scanf("%s",hex);
	int length = strlen(hex);
        int i;
        char buf = 0;
        for(i = 0; i < length; i++){
                if(i % 2 != 0){
                        printf("%c\n", hex_to_ascii(buf, hex[i]));
                }else{
                        buf = hex[i];
                }
        }
}
void main()
{
	char choice;
	printf("Enter your choice:\n");
	printf("a-Hex to Binary\n");
	printf("b-Binary to Hex\n");
	printf("c-Hex to ASCI\n");
	printf("d-Text to Binary\n");
	scanf("%c",&choice);
	switch(choice)
	{
		case 'a':
			hex2bin();
			
		case 'b':
			bin2hex();	

		case 'c':
			hex2asci();
		case 'd':
			text2bin();
	}
}
