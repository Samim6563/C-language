#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("Enter number of rows:");
	scanf("%d",&row);
	printf("Enter number of colums:");
	scanf("%d",&col);
	int matrix1[row][col];
	int matrix2[row][col];
	int matrix3[row][col];
printf("Enter the elements of frist matrix\n")	;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&matrix2[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}
	printf("Addition two matrix is\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",matrix3[i][j]);
		}
		printf("\n");
	}
	return 0;
}
