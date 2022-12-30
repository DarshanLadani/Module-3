#include<stdio.h>
int main()
{
	float amount,rate,time,interest;

	printf("amount :");
	scanf("%f",&amount);
	printf("rate:");
	scanf("%f",&rate);
	printf("time:");
	scanf("%f",&time);
	
	interest=((amount*rate*time)/100);
	
	printf("Simple Intreset : %f",interest);
	
	return 0;	
}

