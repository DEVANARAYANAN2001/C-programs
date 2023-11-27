#include<stdio.h>
#include<stdlib.h>
/*
Name: R DEVANARAYANAN
Date: 12 aug 2023
Title: WAP to find the product of given matrix.
Sample I/O: Enter number of rows : 3
            Enter number of columns : 3
            Enter values for 3 x 3 matrix :

            1      2      3
            1      2      3
            1      2      3

           Enter number of rows : 3
           Enter number of columns : 3
           Enter values for 3 x 3 matrix :

           1      1     1 
           2      2     2
           3      3     3

Sample O/P: Product of two matrix :

            14      14      14
            14      14      14
            14      14      14
 */

int matrix_mul(int **, int, int, int **, int, int, int **, int, int);
int main()
{
    int **mat_a, **mat_b, **result;                       //to craet the double pointer for dynamci memeory allocation
    int row1,row2,colum1,colum2,row3,colum3;
    printf("Enter the mat_a row1 value : ");
    scanf("%d",&row1);                                       //to read the row size from the user
    printf("Enter the mat_a colum1 value : ");
    scanf("%d",&colum1);                                     //to read the column value from the user
    mat_a=malloc(row1*sizeof(int *));                       //to allocate the memory dynamically
    for(int i=0;i<row1;i++)
    {
	mat_a[i]=malloc(colum1*sizeof(int));
    }
    printf("Enter the value for %d x %d matrix :",row1,colum1);
    for(int j=0;j<row1;j++)
    {
	for(int k=0;k<colum1;k++)
	{
	    scanf("%d",&mat_a[j][k]);                    //to read the value from the user
	    printf("%d ",mat_a[j][k]);
	}
	printf("\n");
    }
    printf("Enter the mat_b row2 value : ");
    scanf("%d",&row2);                                  //to read the row value from the user
    printf("Enter the mat_b colum2 value : ");
    scanf("%d",&colum2);                                    //to read the column value from the user
    if(colum1 != row2)
    {
	printf("Matrix multiplication is not possible\n");    //the condition is true the error message is printerd
    }
    else
    {
	mat_b=malloc(row2*sizeof(int *));                //to create the memory dynamically
	for(int i=0;i<row2;i++)
	{
	    mat_b[i]=malloc(colum2*sizeof(int));
	}
	printf("Enter the value for %d x %d matrix :",row2,colum2);
	for(int j=0;j<row2;j++)
	{
	    for(int k=0;k<colum2;k++)
	    {
		scanf("%d",&mat_b[j][k]);                        //to read the vlaue from the user
		printf("%d ",mat_b[j][k]);
	    }
	    printf("\n");
	}
	row3=row1;
	colum3=colum2;                                      
	result=malloc(row3*sizeof(int *));                 //to creat the memory dynamically fro the result output
	for(int i=0;i<row3;i++)
	{
	    result[i]=malloc(colum3*sizeof(int));
	}

	matrix_mul(mat_a,row1,colum1,mat_b,row2,colum2,result,row3,colum3);          //the function calling
	printf("Product of two matrix :\n");
	for(int j=0;j<row3;j++)
	{
	    for(int k=0;k<colum3;k++)
	    {
		printf("%d ",result[j][k]);                      //to print the matrix output
	    }
	    printf("\n");
	}
    }
}

int matrix_mul(int **mat_a, int row1, int colum1, int **mat_b, int row2, int colum2, int **result, int row3, int colum3)
{ 
    result[0][0]=0;
    for(int i=0;i<row1;i++)
    {
	for(int j=0;j<colum2;j++)
	{
	    for(int k=0;k<colum1;k++)
	    {
		result[i][j] += mat_a[i][k]*mat_b[k][j];              //the matrix multiplication operation
	    }
//	    printf("%d\n",result[i][j]);
	}
    }
}
