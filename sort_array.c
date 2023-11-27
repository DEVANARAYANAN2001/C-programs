#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 11 july 2023
Title: Print the values in sorted order without modifying or copying array
Sample I/O: Enter the size : 5
            Enter 5 elements 
            10 1 3  8 -1
Sample O/P: After sorting: -1 1 3 8 10
 */
void print_sort(int [], int);
int main()
{
    int size, iter;
    //    printf("Enter the size of the array : ");
    scanf("%d", &size);                             //read the size from user
    int arr[size];                                  //to initialize the array
						    //    printf("Enter the %d elements",size);
    for (iter = 0; iter < size; iter++)
    {
	scanf("%d", &arr[iter]);                          //to read the array from the user
    }
    print_sort(arr, size);                     //the function calling
}
void print_sort(int arr[],int size)
{
    int i,j,k,large,small,sec_small;
    large=arr[0];                         //to initialize the first element of the array is large
    small=arr[0];                        //the first element of the array also initialize the small
    for(i=1;i<size;i++)
    {
	if(large < arr[i])
	{
	    large=arr[i];            //to find the large element of the array
	}
	if(small > arr[i])
	{
	    small=arr[i];               //to find the small element of the array 
	}
    }
    sec_small=large;              //to assign large value to the sec_small
    printf("After sorting: ");     
    for(j=0;j<size;j++)
    {
	for(k=0;k<size;k++)
	{
	    if(arr[k] > small && arr[k] < sec_small)
	    {
		sec_small=arr[k];           //tp find the sec_small number in that array
	    }
	}
	printf("%d ",small);              //print the small value oarrf the array
	small=sec_small;                 //after assign the sec_small value to the small
	sec_small=large;                 //assign the large value into the sec_small 
    }
    printf("\n");
    printf("Original array value "); 
    for(i=0;i<size;i++)
    {
	printf("%d ",arr[i]);
    }
}             
