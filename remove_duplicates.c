#include<stdio.h>
/*
Name: R DEVANARAYANAN 
Date: 04 july 2023
Title: WAP to remove duplicate elements in a given array
Sample I/O: 5 1 3 1 5
Sample O/P: 5 1 3
 */
void fun(int*,int*,int,int*);                             //the prototype
int main()
{
    int size,size1=0;                                   //the variable initialization
    printf("Enter the size: ");
    scanf("%d",&size);                                 //to read the size of array from the user
    int arr1[size],arr2[size];                         //to initialize the arrays
    printf("Enter the elements into the array: ");
    for(int i=0;i<size;i++)
    {
	scanf("%d",&arr1[i]);                          //the first array to raed the element from the user 
    }
    fun(arr1,arr2,size,&size1);                              //the function calling
}
void fun(int arr1[],int arr2[],int size,int *size1)
{
    int i, j;                              
    arr2[0] = arr1[0];                           //the first array first element will store the second array first element
    *size1 = 1;                                  //the new size will be increased
    for(i = 1;i < size;i++)
    {
	int flag=1;                            //to set the falg 1
	for(j = 0;j < *size1;j++)
	{
	    if(arr1[i]==arr2[j])
	    {
		flag=0;                    //the array1 and array2 element will be equal set flag will 0
	    }
	}
	if(flag)
	{
	    arr2[*size1] = arr1[i];         //the flag will 1 the first array element will store the second array
	    *size1=*size1+1;                //the new size will increased
	}
    }
    for(int k = 0;k < *size1;k++)
    {
	printf("%d ",arr2[k]);              //to print the without duplicate elements 
    }
    printf("\n");
}
