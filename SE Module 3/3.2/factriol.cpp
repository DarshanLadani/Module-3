#include<stdio.h>
int main()
{
	int a,i,n=1;
	printf(" Enter Number : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		n*=i;
		
	}
	printf(" Factriol of %d is %d",a,n);
	return 0;
}

