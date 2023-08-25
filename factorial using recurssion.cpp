#include<stdio.h>
int fact(int n)
{
	return n*fact(n-1);
}
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",fact(num));
}
