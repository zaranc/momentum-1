#include<stdio.h>
int main()
{
	int unit,e_bill,surcharge,total_e_bill;
	
	printf("ENTER THE YOUR USED UNIT VALUE = ");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		e_bill=unit*0.50;
		printf("YOUR ELECTRICITY BILL IS = %d",e_bill);
	} 
	 else if(unit<=150)
	 {
	 	e_bill=(unit-50)*0.75+25;
	    printf("YOUR ELECTRICITY BILL IS = %d",e_bill);	
	 }
	 else if(unit<=250)
	 {
	 	e_bill=(unit-150)*1.20+100;
	 	printf("YOUR ELECTRICITY BILL IS = %d",e_bill);
	 }
	 else
	 {
	 	e_bill=(unit-250)*1.50+220;
	 	printf("YOUR ELECTRICITY BILL IS = %d",e_bill);
     }
	    surcharge=e_bill*0.20;
		total_e_bill= e_bill+surcharge;	
	 
}
