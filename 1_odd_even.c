#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 31 may 2023
Title: WAP to check if number is odd or even 
Sample I/O: Enter the value of 'n' 2
Sample O/P: 2 is positive even number
*/

int main ()
{
    int num,var;                          //initiate the integer variable 'var''num'
    printf("Enter the value of 'n':");    //print the input number
    scanf("%d",&num);                     //read the input from user
    var=num%2;                            //given input num modulus by 2 and the output stoe variable 'var' 
    if (num>0)                            //check the number is grater than 0 its true go in
    {
	if (var==0)                        //check the number isequal to 0 its true go in
	{
	printf("%d is positive even number\n",num);
	}
    else
    {
	printf("%d is positive odd number\n",num);
    }
    }
    else if (num<0)                         //check the given number is less than 0 its true go in
    {
	if (var==0)                         //check the var value is equal 0 its truego in
	{
	    printf("%d is negative even number\n",num);
	}
	else
	{
	    printf("%d is negative odd number\n",num);
	}
    }
    else 
    {
	printf("0 is neither odd nor even\n");   //given number is 0 print neither odd nor even
    }

    return 0;
}

