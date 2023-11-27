#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 23 june 2023
Title: WAP to implement Circular right shift
Sample I/O: Enter num: 12
Enter n : 3
Sample O/P: Result : 10000000 00000000 00000000 00000001
 */

int circular_right(int, int);          //prototype
int print_bits(int);
int main()
{
    int num, n, ret;                      //variable initialization
    printf("Enter the num:");
    scanf("%d", &num);
    printf("Enter n:");
    scanf("%d", &n);
    ret = circular_right(num, n);         //function calling
    print_bits(ret);
}
int circular_right(int num,int n)
{
    int var1=0,var2=0,result=0;   //variable initialization
    unsigned var=0;
    var=(unsigned)num>>n;             //the integer num will right shift be n times and store to unsigned type to variable of var
    var1=num&((1<<n)-1);             //to find the mask of taking lost n bits and the num and mask perform bitwise AND operation that value will store var1
    var2=(var1<<31-n+1);             //the var1 will left shifted to msb of value and store the variable of var2
    result=var|var2;                 //the var and var2 perform bitwise or operation and store result
    return result;             //the result will retuen to function
}
int print_bits(int result)
{
    printf("Result in Binary: ");              
    for (int i=31;0<=i;i--)            //the loop will print the binary of result value
    {
	if(result&(1<<i))
	{
	    printf("1 ");
	}
	else
	{
	    printf("0 ");
	}
    }
}
