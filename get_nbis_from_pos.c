#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 18 june 2023
Title: WAP to get 'n' bits from given position of a number
Sample I/O: Enter the number: 12
            Enter number of bits: 3
            Enter the pos: 4
Sample O/P: Result = 3
 */
int get_nbits_from_pos(int, int, int);                   //prototype
int main()
{
    int num, n, pos, res = 0;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter number of bits: ");
    scanf("%d",&n);
    printf("Enter the pos: ");
    scanf("%d",&pos);
    res = get_nbits_from_pos(num, n, pos);            //function calling 
    printf("Result = %d\n", res);                     //to print the output result
}
int get_nbits_from_pos(int num,int n,int pos)
{
    int var=0,result=0;                                //initialization
    var=num>>(pos-n+1);                                //take the n number bits to the given position and that value store variable var
    result=var&((1<<n)-1);                              //the var value and mask perform bitwise operation and the output store result
    return result;
}
