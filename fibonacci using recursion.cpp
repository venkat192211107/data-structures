#include<stdio.h>
int fibonacci(int n){
	if(n<=1)
	  return n;
	else
	  return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
	int n=10;
	printf("fibonacci series up to %d terms: ",n);
	for(int i=0;i<n;i++){
		printf("%d",fibonacci(i));
	}
	printf("\n");
	return 0;
}