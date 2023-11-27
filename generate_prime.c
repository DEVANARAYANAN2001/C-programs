#include<stdio.h>
/*
Name: R DEAVANARAYANAN 
Date: 13 july 2023
Title: WAP to check whether a given number is prime or not using function
Sample I/O: Enter a number: 2
Sample O/P: 2 is a prime number
 */

int is_prime(int);

int main()
{
    int num,ret;
    printf("Enter the number: ");
    scanf("%d",&num);                                    //to read the num value from the user 
    if(num > 0)
    {
	ret=is_prime(num);                              //the function calling
	if(ret == 1)                                    //the ret value is 1 it print the num is prime
	{
	    printf("%d is a prime number\n",num);
	} 
	else                                           //the ret value is not 1 to print is not prime
	{
	    printf("%d is a not prime number\n",num);
	}
    }
    else                                               //the num is less than zero to print invalid input
    {
	printf("Invalid input\n");
    }
}
int is_prime(int num)
{
    int i=2,count=0;                                      //to initialize the i and count value
    do
    {
	if( num % i == 0 )                              //the num is divided by that i value the result is 0 the count will be increased     
	{
	    count++;
	}
	i++; 
    }
    while(i<=num);                                    //to check the i value is lessthan or equal to num or not
    return count;
}

