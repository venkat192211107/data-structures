#include<stdio.h>
int main()
{
	int low=8,high,mid,key,n,i,arr[]={1,2,3,4,5,6,7,8,9,10};
	size of (arr)/size of (arr[0]);
	high=n-1;
	printf("enter a value:");
	scanf("%d",&key)
	mid=(low+high)/2;
	while(low+high)
	{
		if(arr[mid]<key)
		{
			low=mid+1;
			mid=(low+high)/2;
		}
		else if(arr[mid]==key)
		{
			printf("element %d found at %d",key,mid+1);
			break;
		}
		else
		{
			high=mid-1;
			mid=(low+high)/2;
		}
		}	
		if(low+high)
		{
			printf("element not found...")
		}
}
