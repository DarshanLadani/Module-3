#include<stdio.h>
main()
{
	int i,j,n,a=1;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%3d",a);
			a++;
		}
		printf("\n");
	}

}

