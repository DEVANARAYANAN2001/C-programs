#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 04 july 2023
Title: WAP to find 3rd largest element in an array
Sample I/O: 5 1 4 2 8
Sample O/P: 4
 */
int sec_largest(int*, int);                         //prototype
int main()
{
    int size, ret;                                //the variable initialization
    printf("Enter the size of the array :");
    scanf("%d", &size);                             //to read the size from the user
    int arr[size];                                //to crate the new array
    for(int i=0;i<size;i++)
    {
	scanf("%d",&arr[i]);                      //read the array element from the user
    }
    ret = sec_largest(arr, size);                  //the function calling
    printf("Third largest element of the array is %d\n",ret); //to print the thred large array element
}
int sec_largest(int arr[],int size)
{
    int i,max1,max2,max3;                   //to initialize the variablle
    max1=arr[0]; 
    max2=arr[1];
    max3=arr[2];
    for(i=1;i<size;i++)
    {
	if(max1<arr[i])                  //To check the condition its true below the operation will perform 
	{
	    max3=max2;                  //the max2 value will store the max3 variable
	    max2=max1;                  //the max1 value will store the max2 variable
	    max1=arr[i];               //the large value will store the max1 variable
	}
	else if (max2<arr[i] && arr[i]<max1)          //the first condition will false thsi condition is true below opeartion will perform
	{
	    max3=max2;                //the max2 value will store max3 variable
	    max2=arr[i];              //the largest will store the max2 variable 
	}
	else if (max3<arr[i] && arr[i]<max2)
	{
	    max3=arr[i];
	}
    }
    return max3;
}

