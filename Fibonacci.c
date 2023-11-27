#include<stdio.h>
/*
Name: R DEVANARAYANAN 
Date: 05 july 2023
Title: WAP to generate fibbonacci numbers using recursion
Sample I/O: Enter a number: 8
Sample O/P: 0, 1, 1, 2, 3, 5, 8
 */
void positive_fibonacci(int, int, int, int);              
int main()
{
    int limit;                                        //initialization
    printf("Enter the limit : ");
    scanf("%d", &limit);                            //read the limit from the user
    positive_fibonacci(limit, 0, 1, 0);             //the function calling
}
void positive_fibonacci(int limit,int var1,int var2,int sum)
{
    if(limit > 0)                                     //check the limit are grater than 0 or not
    {
	if(sum == 0 )                                //the sum value is equal to 0 the var1 and var2 value will be printed
	{
	    printf("%d, ",var1);
	    printf("%d, ",var2);
	}
	if(sum < limit)
	{
	    sum=var1+var2;                              //the var1 and var2 value will be added and store the variable sum
	    var1=var2;                                   //to assign the var2 value to var1
	    var2=sum;                                  //to assign the sum value to var2
	    if(sum <= limit)                          
	    {
		printf("%d, ",sum);                    //to check the sum value its less then equal to limit the sum will printed
		positive_fibonacci(limit,var1,var2,sum);    //the recursion function calling 
	    }
	}
    }
    else if(limit ==0)              //the limit is equal to 0 to print 0
    {
	printf("0\n");
    }	
    else                               //the limit is less than 0 to print invalid input
    {
	printf("Invalid input\n");
    }
}
