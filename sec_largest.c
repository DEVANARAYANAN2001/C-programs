#include<stdio.h>
/*
Name: R DEVANARAYANAN 
Date: 03 july 2023
Title: WAP to find 2nd largest element in an array
Sample I/O: 5 1 4 2 8
Sample O/P: 5
 */

int sec_largest(int*, int);                                   //prototype
int main()
{
    int size, ret;                                           //initialization
    printf("Enter the size of the array :");
    scanf("%d", &size);                                     //to read the array size from user
    int arr[size];                                          //to create the new array 
    for(int i=0;i<size;i++)
    {
	scanf("%d",&arr[i]);                               //to read the array element from user
    }
    ret = sec_largest(arr, size);                        //function calling
    printf("Second largest element of the array is %d\n", ret);   //to print the 2nd array element
}
int sec_largest(int arr[],int size)
{
    int i,temp,f_large,s_large;                     //to initialize the variables
    f_large=arr[0];                                 
    s_large=arr[1];
    for(i=1;i<size;i++)                          
    {
	if(f_large<arr[i])                    //to check the condition its true to perform the below operation
	{
	    s_large=f_large;                 //the f_largee will store the s_large
	    f_large=arr[i];                  //the large element will store f_large
	}
	else if(s_large<arr[i])             //the first condition will false this will run
	{
	    s_large=arr[i];               //the large element will s_large variable
	}
    }





    return s_large;
}

