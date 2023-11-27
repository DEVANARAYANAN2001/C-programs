#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 20 june 2023
Title: WAP to put the (b-a+1) lsb’s of num into val[b:a]
Sample I/O: Enter the value of 'num' : 11
            Enter the value of 'a' : 3
            Enter the value of 'b' : 5
            Enter the value of 'val': 174
Sample O/P: Result : 158
 */
int replace_nbits_from_pos(int, int, int, int);    //prototype
int main()
{
    int num, a, b, val, res = 0;              //initialization
    printf("Enter the value of 'num': ");
    scanf("%d",&num);
    printf("Enter the value of 'a': ");
    scanf("%d",&a);
    printf("Enter the value of 'b': ");
    scanf("%d",&b);
    printf("Enter the value of 'val': ");
    scanf("%d",&val);
    res = replace_nbits_from_pos(num, a, b, val); //function calling
    printf("Result = %d\n", res);                 //to print the output result
}
int replace_nbits_from_pos(int num,int a,int b,int val)
{
    int nbit=0,var1=0,var2=0,var3=0,result=0;        //initialization
    nbit=b-a+1;                                      //to find the no of bits and that value store the variable of nbit
    var1=num&((1<<nbit)-1);                //to crate the mask for getting the no of bits from number and that store the variable var1
    var2=var1<<nbit;                      //the var1 are left shift by nbit time and the result will store t5he variable of var2
    var3=val&(~(((1<<nbit)-1)<<nbit));      //to remove the no of bits from the position and that output will store the variable var3
    result=var2|var3;                     //the var2 and var3 are perform the bitwise OR operatorr and the result store the variable of result
    return result;
}
