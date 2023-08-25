#include<stdio.h>
int main()
{
  	int arr[]={1,8,6,4,9,2,0,3,8,5},Size,i,Search,Flag=0,n;
  	n=sizeof(arr)/sizeof(arr[0]);
  	printf("\n Please Enter the Search Element  :  ");
  	scanf("%d",&Search);      
  	for(i=0;i<n;i++)
   	{
   		if(arr[i]==Search)
     	{
       		Flag=1;
       		break;
	 	}   
   	}
  
  	if(Flag==1)
  	{
  		printf("\nSearch Element %d at Position %d ",Search,i+1);
	}
	else
	{
		printf("\nElement not found ");
	}	
  	return 0;
}
