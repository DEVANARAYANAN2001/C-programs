#include<stdio.h>
#include<stdlib.h>
/*
Name: R DEVANARAYANAN
Date: 17 aug 2023
Title: WAP to implement fragments using Array of Pointers

Sample I/P: Enter no.of rows : 3
            Enter no of columns in row[0] : 4
            Enter no of columns in row[1] : 3
            Enter no of columns in row[2] : 5
            Enter 4 values for row[0] : 1 2 3 4
            Enter 3 values for row[1] : 2 5 9
            Enter 5 values for row[2] : 1 3 2 4 1

            Before sorting output is:

            1.000000 2.000000 3.000000 4.000000 2.500000

            2.000000 5.000000 9.000000 5.333333

            1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

Sample O/P: After sorting output is:

            1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

            1.000000 2.000000 3.000000 4.000000 2.500000

            2.000000 5.000000 9.000000 5.333333
 */
int fragments(int,int *, float *[]);                        //function prototype
int main()
{
    int row;
    printf("Enter no.of rows : ");
    scanf("%d",&row);                                   //to read the row walue from the user
    float *frag[row];                                     //to create the array of pointer
    int colum[row];
    for(int i=0;i<row;i++)
    {
	scanf("%d",&colum[i]);                         //to read the column value respect the row size
	colum[i] +=1;                                                               //to store the extra one column value 
	printf("Enter no of columns in row[%d] :%d\n",i,(colum[i]-1));
    }
    for(int i=0;i<row;i++)
    {
	frag[i]=malloc(colum[i]*sizeof(float));                        //dynamically memory allocation
    }
    int j;
    for(int i=0;i<row;i++)
    {	
	float sum = 0;
	printf("Enter %d value of row[i] : ",(colum[i]-1));
	for(j=0;j<(colum[i]-1);j++)
	{
	    scanf("%f",&frag[i][j]);                               //to read the input from the user row by row
	    sum +=frag[i][j];                                      //to add the value and store the sum variable
	}
	frag[i][j]=sum/(float)(colum[i]-1);                         //to find the average of the each rows
    }
    printf("Before sorting output is:\n");
    for(int i=0;i<row;i++)
    {
	for(int j=0;j<colum[i];j++)
	{
	    printf("%f ",frag[i][j]);                                   //to print the fragments before sorting
	}
	printf("\n");
    }
    fragments(row,colum,frag);                                            //function calling
    printf("After sorting output is:\n");
    for(int i=0;i<row;i++) 
    {
	for(int j=0;j<colum[i];j++)
	{
	    printf("%f ",frag[i][j]);                               //to print the fragments after sorting
	}
	printf("\n");
    }
}
int fragments(int row,int colum[], float *frag[])
{  
    float* temp;
    int temp1;
    for(int i=0;i<row;i++)
    {
	for(int j=i+1;j<row;j++)
	{
	    if(frag[i][(colum[i])-1] > frag[j][(colum[j])-1])      //sort accending order to the average value
	    {
		temp = *(frag+i);
		*(frag+i)=*(frag+j);
		*(frag+j)=temp;                             //the swap operation 
		temp1=colum[i];
		colum[i]=colum[j];
		colum[j]=temp1;
	    }
	}
    }
}
