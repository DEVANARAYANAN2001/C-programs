#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 20 june 2023
Title: WAP to toggle 'n' bits from given position of a number
Sample I/O: Enter the number: 10
            Enter number of bits: 3
            Enter the pos: 5
Sample O/P: Result = 50
 */

int toggle_nbits_from_pos(int, int, int);         //prototype
int main()
{
    int num, n, pos, res = 0;
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    res = toggle_nbits_from_pos(num, n, pos);     //function calling
    printf("Result = %d\n", res);                 //to ptint the output result
}
int toggle_nbits_from_pos(int num,int n,int pos)
{
    int var=0,result=0;                         //initialization
    var=((1<<n)-1)<<(pos-n+1);            //to make the mask and that mask store the variable var
    result=num^var;                  //the num and var are perform the bitwise Exor operation and that output store tha variavle result
    return result; 
}
