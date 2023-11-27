#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 1 june 2023
Title: WAP to generate positive Fibonacci numbers
Sample I/O: Enter a number: 8
Sample O/P: 0 1 1 2 3 5 8
*/

int main ()
{
    int var1=0,var2=1,sum=0,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num>0)                   //to check num value will be grater than zero or not
    {
	printf("%d ",var1);      //print var1 value
	printf("%d ",var2);      //print var2 value
	while (sum<num)          //sum value is less than num value the loop will be run or not
	{
	    sum=var1+var2;       //var1 and var2 will be added and store sum
	    var1=var2;           //the var2 value will assign to var1
	    var2=sum;            //the sum value will assign to var2
	    if(sum<=num)         //to check sum is grater than num or not
	    {
	    printf("%d ",sum);  //print sum value
	    sum++;              //sum is incremented
	    }
	   }
	printf("\n");
    }
    else if (num==0)
    {
	printf("0\n");
    }
    else
    {
	printf("Invalid input\n"); //print erroer message
    }


    return 0;
}
