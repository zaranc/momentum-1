#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("ENTER THE FIRST  VALUE A =");
	scanf("%d",&a);//j=a//
	printf("\nENTER THE SECOND VALUE b =");
	scanf("%d",&b);// a=b//
	printf("\nENTER THE THIRD  VALUE c =");
	scanf("%d",&c);// y=c//
	printf("\nENTER THE FOURTH VALUE d =");
	scanf("%d",&d);// d=D//
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a IS MAX = %d",a);
			}
			else
			{
				printf("d IS MAX = %d",d);
			}
		}
		else
		{
			printf("c IS MAX = %d",c);
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b IS MAX = %d",b);
			}
			else
			{
				printf("d IS MAX = %d",d);
			}
		}
		else
		{
			if(d>c)
			{
				printf("d IS MAX = %d",d);
			}
			else
			{
				printf("c IS MAX = %d",c);
			}
		}
	}
}

