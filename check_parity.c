#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 08 june 2023
Title: WAP to count number of set bits in a given number and print parity
Sample I/O: Enter the number : 7
Sample O/P: Number of set bits = 3
            Bit parity is Odd
*/

int main ()
{
    int n,i,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);                      //read the n value from the user
    for(i=0;i<=31;i++)                   //the loop will be run 32 times
    {                    
	if(n&1<<i)                      //to check the bit is set or not
	{
	    count++;                     //the bit is set the count value will bue increased
	}
    }
    printf("Number of set bits = %d\n",count); //to print the count value
    if(count%2==0)                             //to check the count odd or even
    {
	printf("Bit parity is Even\n");          //count will be 0 to print even
    }
    else
    {
	printf("Bit parity is Odd\n");           //the count is non 0 it is odd
    }
    return 0;
}




