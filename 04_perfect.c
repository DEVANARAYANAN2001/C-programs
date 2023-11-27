#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 06 june 2023
Title: WAP to check if number is perfect or not
Sample I/O: Enter a number: 6
Sample O/P: Yes, entered number is perfect number
*/

int main ()
{
    int num,i,sum=0,var=0;
    printf("enter the number: ");
    scanf("%d",&num);
    if(num>0)                             //to check the num value grater than zero or not
    {
    for(i=1;i<num;i++)                    //loop will run num-1 times
    {
	var=num%i;                        //take modules of num and i and that value will be store var
	if(var==0)                        // the var value will equal to 0
	{
	sum=sum+i;                        //to add the sum and i value and store to sum
	}
    }
    if(num==sum)                          //to check the num and summ is equal or not
    {
	printf("Yes, entered number is perfect number"); //print the output message
    }
    else
    {
	printf("No, entered number is not a perfect number"); //print the error message
    }
    }
    else
    {
	printf("Error : Invalid Input, Enter only positive number"); //print the error message
    }
    printf("\n");
    return 0;
}

