#include <stdio.h>
int main()
{
    int r,c,arr[100][100];
    printf("Enter the number of rows and column\n");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nRow Sum....\n");
    for(int i=0;i<r;i++)   
    {
        int rsum=0;
        for(int j=0;j<c;j++)
        {
            rsum=rsum+arr[i][j];
        }
        
        printf("\nSum of all the elements in row %d is %d\n",i,rsum);
    }
    printf("\nColumn Sum....\n");
    for(int i=0;i<r;i++)
    {
        int csum=0;
        for(int j=0;j<c;j++)
        {
            csum=csum+arr[j][i];
        }
        printf("\nSum of all the elements in column %d is %d\n",i,csum);
    }
    return 0;
}
