#include<stdio.h>
/*
Name: R DEVANARAYANAN 
Date: 06 june 2023
Title: WAP to print pyramid pattern as shown below
Sample I/O: Enter the number: 4
Sample O/P: 4
            3 4
            2 3 4
            1 2 3 4
            2 3 4
            3 4
            4
*/

int main ()
{
    int num,i,j,k,l;
    printf("enter the number: ");
    scanf("%d",&num);
    for(i=num;i>=1;i--)      //the loop will run num times  
    {
	for(j=i;j<=num;j++)  //this loop will run also num of times
	{
	    printf("%d ",j); //to print the j value
	}
	printf("\n");
    }
    for(k=2;k<=num;k++)   //the loop will num-1 times
    {
	for(l=k;l<=num;l++) 
	{
	    printf("%d ",l); //to print the l values
	}
	printf("\n");
    }
    return 0;
}

