#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 09 june 2023
Title: WAP to print all primes using Sieve of Eratosthenes method
Sample I/O: Enter the value of 'n' : 20
Sample O/P: The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
*/

int main ()
{
    int i,j,k,m,n;
    printf("Enter the value of 'n' :");
    scanf("%d",&n);                          //read the input num from the user
    if(n>1)
    {
	int arr[n+1];            //initialise the array size
	for(i=0;i<=n;i++)      
	{
	    arr[i]=i;            //the i value vill be store array
	}
	for(j=2;j<=(n/2);j++)
	{
	    for(k=2;j*k<=n;k++) //to find the non prime numbers
	    { 
		arr[j*k]=0;      //put the 0 to non prime numbers
	    }
	}
	    printf("The primes less than or equal to %d are :",n);
	    for(m=2;m<=n;m++)
	    {
		if(arr[m]!=0)             
		{
		    printf(" %d", arr[m]);     //to print the primes less than or equal to n 
		}
	    }
	    printf("\n");
    }
    else
    {
	printf("Please enter a positive number which is > 1");
    }

    return 0;
}

