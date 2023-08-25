#include<stdio.h>
int main()
{
	int a=0,b=1,next,i=2,len;
	printf("enter a number:");
	scanf("%d",&len);
	printf("Fibonacci series = %d,%d",a,b);
	while(i<len)
	{
		next=a+b;
		printf(", %d",next);
		a=b;
		b=next;
		i++;
	}
}
