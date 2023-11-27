#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 15 june 2023
Title: WAP to replace 'n' bits of a given number
Sample I/O: Enter the number: 10
            Enter number of bits: 3
            Enter the value: 12
Sample O/P: Result = 12
 */


int replace_nbits(int, int, int);            //prototype

int main()
{
    int num, n, val, res = 0;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter number of bits: ");
    scanf("%d",&n);
    printf("Enter the value: ");
    scanf("%d",&val);
    res = replace_nbits(num, n, val);        //function calling
    printf("Result = %d\n", res);            //to print the output result
}
int replace_nbits(int num,int n,int val)
{
    int var1=0,var2=0,replace=0;           //initialization
    var1=val&(1<<n)-1;                     //take the n number of bits in val and store the value in var1
    var2=num&(~((1<<n)-1));                //remove the n number of bits from given num and store the value in var2
    replace=var2|var1;                    //the var1 and var2 perform or operation and that result store the variable of repalce 
    return replace;
}

