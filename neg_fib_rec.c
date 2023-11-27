#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 11 july 2023
Title: WAP to generate negative fibbonacci numbers using recursion
Sample I/O: Enter a number: -8
Sample O/P: 0, 1, -1, 2, -3, 5, -8
 */
void negative_fibonacci(int, int, int, int);
int main()
{
    int limit;
    printf("Enter the limit : ");
    scanf("%d", &limit);                                               //to raed the limit value form the user 
    negative_fibonacci(limit, 0, 1, 0);                                //the function calling
}
void negative_fibonacci(int limit,int var1,int var2,int sum)
{
    if (limit < 0)                                                         //to check the limit value is lessthan zero or not
    {
	if (sum == 0)                                                     //the sum value is equal to zero to print the var1 value
	{
	    printf("%d ",var1);

	}
	if (sum >= limit && sum <= -limit )                           //the sum is grater than equal to limit and less than or euqal to -limits
	{
	    printf("%d ",var2);                       
	    sum=var1-var2;                                           //the avr1 and var2 perform subtraction and the value will store sum
	    var1=var2;                                               //the var2 value will assign to var1
	    var2=sum;                                                 //the sum value will be assign to var2
	    negative_fibonacci(limit,var1,var2,sum);                 //recursive calling
	}
    }
    else if (limit == 0)
    {
	printf("0\n");
    }
    else
    {
	printf("Invalid input\n");
    }
}

