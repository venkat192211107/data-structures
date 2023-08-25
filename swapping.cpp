#include<stdio.h>
int main()
 {
 	int num1,num2,temp;
 	printf("Enter the first num:");
 	scanf("%d",&num1);
 	printf("Enter the second num:");
 	scanf("%d",&num2);
 	printf("Before swapping...\n");
 	printf("num1=%d\nnum2=%d",num1,num2);
 	temp=num1;
 	num1=num2;
 	num2=temp;
 	printf("\nAfter swapping...\n");
 	printf("num1=%d\nnum2=%d",num1,num2);
 	
 	
 }
