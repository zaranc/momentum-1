#include<stdio.h>
int main()
{
	char ch;
	
		
	printf("\nTYPE m NUMBER  FOR   monday   ");
	printf("\nTYPE t NUMBER  FOR   tuseday  ");
	printf("\nTYPE w NUMBER  FOR   wednsday ");
	printf("\nTYPE T NUMBER  FOR   thursday ");
	printf("\nTYPE f NUMBER  FOR   friday   ");
	printf("\nTYPE s NUMBER  FOR   saturday ");
	printf("\nTYPE S NUMBER  FOR   sunday   ");


	printf("\nENTER THE value = ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		    case'm' :
			printf("monday");
			break;
			
			case't' :
			printf("tuseday");
			break;
			
			case'w' :
			printf("wednsday");
			break;
			
			case 'T' :
			printf("thursday");
			break;
			
			case'f' :
			printf("friday");
			break;
			
			case's' :
			printf("saturday");
			break;
			
			case'S' :
			printf("sunday");
			break;

			default :
			printf("PLEASE ENTER THE VALID WEEK ALPHABET");
			break;
	
	}
	
	return 0;
}
