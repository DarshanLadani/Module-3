#include<stdio.h>
int main()
{
	
	float day,week,month,year;
	
	printf("Enter Value Of Day :");
	scanf(" %f",&day);
	
	
    year=day/365;
    week=day/7;
    month=day/30.4;
    day=day*1;
	
	printf("\n Year   = %.2f",year);
	printf("\n Week  = %.2f",week);
	printf("\n Month = %.2f",month);
	printf("\n Day  = %.2f",day);
	
	return 0;
}

