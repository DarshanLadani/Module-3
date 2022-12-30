#include<stdio.h>
int main()
{
	
	float a,b,addition,substraction,multiplication,division;
	int modulo,x,y;
	printf("Enter Value Of A : ");
	scanf(" %f",&a);
	
	printf("Enter Value Of B : ");
	scanf(" %f",&b);
	
	printf("Enter value of X : ");
	scanf("%d",&x);
	
	printf("Enter value of Y : ");
	scanf("%d",&y);
	
    addition=a+b;
    substraction=a-b;
	multiplication=a*b;
	division=a/b;
	modulo=x%y;
	
	
	printf("\n Addition       = %.2f",addition);
	printf("\n Substraction   = %.2f",substraction);
	printf("\n Multiplication = %.2f",multiplication);
	printf("\n Division       = %.2f",division);
	printf("\n Modulo         = %d",modulo);
	
	return 0;
}

