#include<stdio.h>
int main()
{
	int year;
	printf("Enter Year :");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("This is Leap Year");
	}
	else
	{
		printf("This is not Leap Year");
	}
}
