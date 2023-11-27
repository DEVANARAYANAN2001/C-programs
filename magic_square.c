#include<stdio.h>
#include<stdlib.h>
/*
Name: R DEVANARAYANAN 
Date: 01 aug 2023
Title: WAP to generate a n*n magic squareVirtual programming lab
Sample I/O: Enter a number: 3
Sample O/P: 8      1      6
            3      5      7
            4      9      2
 */
void magic_square(int **, int);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);                         //to read the number from the user
    int **arr;                               //to initialize the double pointer 
    arr=calloc(num,sizeof(int*));           //to create the memory dynamically
    int i;
    for(i=0;i<num;i++)
    {
	arr[i]=calloc(num,sizeof(int));   //to create the memory dynamically 
    }
    if (num %2 != 0)                //the number is odd then function calling will work
    {
	magic_square(arr,num);
	for(int i=0;i<num;i++)
	{
	    for(int j=0;j<num;j++)
	    {
		printf("%d ",arr[i][j]);      //to print the output of the magic suqare
	    }
	    printf("\n");
	}
    }
    else                                //the number is not odd then error will be printed
    {
	printf("Error : Please enter only positive values ");
    }
    return 0;
}
void magic_square(int **arr,int num)
{ 
    int len=num*num;         //to find the length 
    int row=0;               //initialy to assign row is 0
    int colum=num/2;         //initially the colum will assign half of num value
    int prow;             
    int pcolum;                   
    arr[row][colum]=1;        
    for(int i=2;i<=len;i++)         //the loop will be run length time
    {
	row--;                  //the row value will be decremented
	colum++;	        //teh colum vallue will be incremented
	if(row < 0)            //the row is less then zero to assign row is num-1
	{
	    row=num-1;
	}
	if(colum >= num)       //teh colum is grater than num to assign colum is zero
	{
	    colum=0;
	}
	if(arr[row][colum] == 0)   
	{
	    arr[row][colum]=i;      //initially the arr of row and colum zero then print the i value 
	}
	else
	{
	    arr[++prow][pcolum]=i;        //initially not zero then the arr of increment of previous row and previous colum then print the i value
	    row=prow;                   //to assign the previous row value into row
	    colum = pcolum;             //to assign the previous colum value inti the colum
	}
	prow = row;                      //the row value will assign to the previous row variable
	pcolum = colum;                 //the colum value will assign to the previous colum variable
    }
}

