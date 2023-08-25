#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("enter a number:");
	scanf("%d",&num);
	if(num>=1)
	{
		for(i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("the factorial of the num is: %d",fact);
	}
	else
	printf("invalid input...");
}
