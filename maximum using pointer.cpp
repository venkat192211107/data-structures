#include<stdio.h>
int main()
{
	int arr[100],n,i,max;
	int *ptr;
	clrscr()
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the elements in array:\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("elements in the array are :\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	ptr=&a[0];
	m=a[0];
	for(i=0;i<n;i++)
	{
	if(max<=*ptr)
	max=*ptr;
	ptr++;	
	}
	printf("maximum element in array is :%d",max);
	getch();
}
