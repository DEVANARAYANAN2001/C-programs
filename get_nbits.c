#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 15 june 2023
Title: WAP to get 'n' bits of a given number
Sample I/O: Enter the number: 10
            Enter number of bits: 3
Sample O/P: Result = 2
 */

int get_nbits(int, int);                  //prototype
int main()
{
    int num, n, res = 0;                //initialization
    printf("Enter the number: ");
    scanf("%d",&num);                 //read num from user
    printf("Enter number of bits: "); 
    scanf("%d",&n);                       //raed n bit from user
    res = get_nbits(num, n);              //function calling
    printf("Result = %d\n", res);       //print the output result
}
int get_nbits(int num,int n)
{
    return num&((1<<n)-1);              //take the n number of bit is
}
