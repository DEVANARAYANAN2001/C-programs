#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 05 july 2023
Title: WAP to find factorial of given number using recursion
Sample I/O: Enter the value of N : 7
Sample O/P: Factorial of the given number is 5040
 */
int main()
{
    static int num=1;                           //initialize the num and flag value static type
    static int flag=1;
    if(flag == 1)                              //the flag condition will true the below operation perform
    {
	printf("Enter the value of N : ");
	scanf("%d",&num);                     //to read the num value from the user
	flag++;
    }
	static unsigned long long int fact = 1;  //initialize the fact value ,static type
    if(num > 0)                                   //the num value will grater than 0 below operation will perform
    {
	fact=fact * num;
	num--;
	main();                              //the function calling
    }
    else if (num < 0)                //the num is less than 0 to print Invalid
    {
	printf("Invalid input\n");
    }
    else
    {
	printf("Factorial of the given number is %lld\n",fact);       //to print the factorial of given number
    }




}

