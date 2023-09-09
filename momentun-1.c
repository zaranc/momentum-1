#include<stdio.h>
int main()
{
	char ch;
	printf("ENTER THE CHARACTER VALUE = ");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	{
		printf("THIS VALUE IS ALPHABET = %c",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("THIS IS NUMBER VALUE = %c",ch);
	}
	else
	{
		printf("THIS IS A SPECAIL CHARCTER =%c",ch);
	}
	return 0;
}
