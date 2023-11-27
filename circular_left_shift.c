#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 23 june 2023
Title: WAP to implement Circular left shift
Sample I/O: Enter num: 12
            Enter n : 3
Sample O/P: Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0
 */

int circular_left(int, int);             //prototype
int print_bits(int);
int main()
{
    int num, n, ret;                     //variable initialization
    printf("Enter the num:");
    scanf("%d", &num);
    printf("Enter n:");
    scanf("%d", &n);
    ret = circular_left(num, n);    //function calling
    print_bits(ret);
}
int circular_left(int num,int n)
{
    int result=0,var=0,var2=0;         //variable initialization
    unsigned var1=0;            
    var=num<<n;                        //the num value will left shift to n times
    var1=num&(((1<<n)-1)<<31-n+1);       //to create tha mask and the num end mask perform bitwise operation and store the unsigned variable var1
    var2=(var1>>31-n+1);                   //the var1 value will right shifted and the value store variable var2
    result=var|var2;                   //the var and var2 to perform bitwise operation and the value store the result
    return result;                     //to return the result value
}
int print_bits(int result)
{
    printf("Result in Binary: ");
    for(int i=31;0<=i;i--)            //to print the binary form of result value
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
