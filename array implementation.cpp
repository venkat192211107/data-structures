#include<stdio.h>
#include<conio.h>
int a[100];
int create()
{
 int n,i;
 printf("\nHow many elements you want to insert?");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nEnter the element number %d:",i+1);
  scanf("%d",&a[i]);
 }
 printf("\nThe list is successfully created");
 return(n);
}
void reverse(int n)
{
 int i;
 printf("\nThe list in reverse order is:");
 for(i=n-1;i>=0;i--)
 {
  printf("%d",a[i]);
 }
}
int search(int n)
{
 int i,key;
 printf("\nEnter the key value:");
 scanf("%d",&key);
 for(i=0;i<n;i++)
 {
  if(a[i]==key)
  {
   printf("The given number is at position %d",i+1);
   return i;
  }
 }
 printf("\nThe number is not in the list");
 return 0;
}
int insert(int n,int a[])
{
 int i,key,pos;
 printf("\nEnter the key value:");
 scanf("%d",&key);
 printf("\nEnter the position:");
 scanf("%d",&pos);
 for(i=n-1;i>=pos-1;i--)
 {
  a[i+1]=a[i];
 }
 a[pos-1]=key;
 n++;
 return n;
}
void display(int n)
{
 int i;
 printf("\nThe list is:");
 for(i=0;i<n;i++)
 {
  printf("%d",a[i]);
 }
}
int delet(int n,int a[])
{
 int i,pos;
 pos=search(n);
 printf("\nThe element is deleted");
 for(i=pos;i<n-1;i++)
 {
  a[i]=a[i+1];
 }
 n--;
 return n;
}
void count(int n)
{
 int i,count=0;
 for(i=0;i<n;i++)
 {
  count++;
 }
 printf("%d",count);
}
int main()
{
 int choice,l;
 printf("\n****Array implementation of ordered list****");
 do
 {
  printf("\n 1.Create  2.Insert  3.Display  4.Reverse  5.Search  6.Delete 7.Count  8.Exit");
  printf("\nEnter the option:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
     l=create();
     break;
   case 2:
     l=insert(l,a);
     break;
   case 3:
     display(l);
     break;
   case 4:
     reverse(l);
     break;
   case 5:
     search(l);
     break;
   case 6:
     l=delet(l,a);
     break;
   case 7:
     count(l);
     break;
   case 8:
     break;
  }
 }while(choice<7);
 getch();
}

