#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 13 june 2023
Title: WAP to check whether a given number is prime or not.
Sample I/O: Enter a number: 2
Sample O/P: 2 is a prime number
*/

int main ()
{
    int num,i,count=0;
    printf("Enter the number: ");
    scanf("%d",&num);                   //read number from the user
    if(num>0)                           //check the num value is grater then 0 or not
    {
	for(i=1;i<=num;i++)
	{
	    if(num%i==0)               //the num value is divided by i and get reminder
	    {
		count++;              //the count is increased
	    }
	}
	if(count==2)                 //to check the count will equal to 2 or not
	{
	    printf("%d is a prime number\n",num); //print the prime or not the given number
	}
	else
	{
	    printf("%d is not a prime number\n",num);
	}
    }
    else
    {
	printf("Invalid input"); //to print the error message
    }
    return 0;
}

