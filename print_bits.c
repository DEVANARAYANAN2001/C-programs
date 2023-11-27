#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 20 june 2023
Title: WAP to print 'n' bits from LSB of a number
Sample I/O: Enter the number: 10
            Enter number of bits: 12
Sample O/P: Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0 
 */

int print_bits(int, int);

int main()
{
    int num, n;
    printf("Enter th enumber: ");
    scanf("%d",&num);
    printf("Enter number of bits: ");
    scanf("%d",&n);
    printf("Binary form of %d:", num);    
    print_bits(num, n);                 ///calling function
    printf("\n");
}
int print_bits(int num,int n)
{ 
    int i;                           //initialization 
    for(i=n;0<i;i--)                 //the loop run for n times
    {
	if(num&(1<<(i-1)))            //to check the num  bit are set or not us bitwise operator
	{
	    printf("1 ");             //the bit is set print 1
	}
	else
	{
	    printf("0 ");             //the bit is not set print 0
	}
    }
}
