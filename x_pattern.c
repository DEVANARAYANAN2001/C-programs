#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 06 june 2023
Title: WAP to print the numbers in X format as shown below
Sample I/O: Enter the number: 4
Sample O/P: 1  4
             23
             23
            1  4
*/

int main ()
{
    int num,i,j;
    printf("enter your choice: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)       //to run the loop for num times
    {
	for(j=1;j<=num;j++)   
	{
	    if(i==j||i+j==num+1)  //to check the condition its true go in
	    {
		printf("%d",j);  //print the j value
	    }
	    else
	    {
		printf(" ");  //to print space 
	    }
	}
    printf("\n");
    
    }




    return 0;
}

