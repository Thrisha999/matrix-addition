#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j;
	printf("Enter the no .of rows for 1st matrix : ");
	scanf("%d",&r1);
	printf("Enter the no .of columns for 1st matrix : ");
	scanf("%d",&c1);
	printf("Enter the elements of first matrix :\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("Enter a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the no .of rows for 2nd matrix : ");
	scanf("%d",&r2);
	printf("Enter the no .of columns for 2nd matrix : ");
	scanf("%d",&c2);
	printf("Enter the elements of second matrix :\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("Enter b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	if((r1==r2)&&(c1==c2))
	{
		for(i=0;i<r1;i++)
	    {
		   for(j=0;j<c1;j++)
		   {
			c[i][j] = a[i][j] + b[i][j];
		   }
	    }
	    printf("Sum of the matrices in a matrix form :\n");
	    for(i=0;i<r1;i++)
	    {
		   for(j=0;j<c1;j++)
		   {
			printf("%d  ",c[i][j]);
		   }
		   printf("\n");
	    }
	}
	else
	{
		printf("Entered matrices to perform addition are of invalid order ");
	}
}
