#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 06 june 2023
Title: WAP to generate negative Fibonacci numbers
Sample I/O: Enter a number: -8
Sample O/P: 0 1 -1 2 -3 5 -8
*/
int main ()
{
    int var1=0,var2=1,sum=0,num;
    printf("Enter a number: ");
    scanf("%d",&num);              //read the num value from the user
    if (num<0)                    //to check the num value will grater than 0 or not
    {
	printf("%d ",var1);       //to print the var1 value
	while(sum >= num && sum <= -num)
	{
	    printf("%d ",var2);   //to print the var2 value
	    sum=var1-var2;        //the variablue var1 and var2 will stbtracted and store the output to sum
	    var1=var2;           //the var2 value will be asssign to var1
	    var2=sum;            //the sum value will be assigned to var2
	}
	printf("\n");
    }
    else if (num==0)
    {
	printf("0\n");           //to print the error message
    }
    else
    {
	printf("Invalid input\n");  //to print the error message
    }
    return 0;
}
