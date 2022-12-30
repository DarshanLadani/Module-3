#include<stdio.h>
int main()
{
	
	float day,week,month,year;
	
	printf("Enter Value Of Year :");
	scanf(" %f",&year);
	
	
    day=year*365;
    week=year*52.17;
    month=year*12;
    year=year*1;
	
	printf("\n Day   = %.2f",day);
	printf("\n Week  = %.2f",week);
	printf("\n Month = %.2f",month);
	printf("\n Year  = %.2f",year);
return 0;
}

