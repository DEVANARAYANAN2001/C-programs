#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 14 june 2023
Title: WAP to find the median of two unsorted arrays
Sample I/O: Enter the 'n' value for Array A: 5
            Enter the 'n' value for Array B: 5
            Enter the elements one by one for Array A: 3 2 8 5 4
            Enter the elements one by one for Array B: 12 3 7 8 5
	   
Sample O/P: Median of array1 : 4
            Median of array2 : 7
            Median of both arrays : 5.5     
 */

int main ()
{
    int n,m,i,j,k,temp,var1 = 0,var3 = 0,add = 0;
    float med,var2 = 0,var4 = 0,sum=0;
    printf("Enter the 'n' value for Array A: ");
    scanf("%d",&n);                                             //read the 'n' number of elements in array A from user
    printf("Enter the 'm' value for Array B: ");
    scanf("%d",&m);                                            //raed the 'm' number of elements in array B from user
    printf("Enter the elements one by one for Array A: ");
    int arr1[n];                                                //initialize the first array
    for(i=0;i<n;i++)
    {
	scanf("%d",&arr1[i]);                                  //raed the first array elements
    }
    printf("Enter the elements one by one for Array B: ");
    int arr2[m];                                                //initialize the second array
    for(j=0;j<m;j++)
    {
	scanf("%d",&arr2[j]);                                   //raed the second array elements
    }
    for(i=0;i<n;i++)
    {
	for(k=i+1;k<n;k++)
	{
	    if(arr1[i]>arr1[k])                                  //compare the array elements
	    {
		temp=arr1[i];                                    //it perform swap operation
		arr1[i]=arr1[k];
		arr1[k]=temp;
	    }
	}
    }
    if(n%2!=0)                                                 //find n value is odd or even its odd go in 
    {
	i=n/2;                 
	var1=arr1[i];                                         //find the median of first array
	printf("Median of Array1 :%d \n",var1);               //print the median
    }
    else if(n%2==0)                                      //the n value will be odd or even if it is even go in
    {
	i=n/2;
	add=arr1[i]+arr1[i-1];
	var2=(float) add/2;                                       //to find the median of first array
	printf("Median of Array1 :%g \n",var2);
    }
    for(j=0;j<m;j++)
    {
	for(k=j+1;k<m;k++)
	{
	    if(arr2[j] > arr2[k])                      //to comprae the array elements
	    {
		temp=arr2[j];                            //to perform swap operation
		arr2[j]=arr2[k];
		arr2[k]=temp;
	    }
	}
    } 
    if(m%2!=0)                                               //to find the second array odd or even
    {
	j=m/2;
	var3=arr2[j];                                           //to find the median of second array
	printf("Median of Array2 :%d \n",var3);               //to print the median of array
    }
    else if(m%2==0)                                           
    {
	j=m/2;
	add=arr2[j]+arr2[j-1];
	var4=(float) add/2;                                   //to find the median of second array
	printf("Median of Array2 :%g \n",var4);               //to print the median of array
    }
    if(n%2!=0 && m%2!=0)                                   //the first and second array is odd go in
    {
	add=var1+var3;
	med=(float) add/2;                                  //to find the average of both array
	printf("Median of both arrays:%g \n",med);
    }
    else if(n%2!=0 && m%2==0)                        //the first array is and second array is even go in
    {
	sum=(float) var1+var4;
	med=(float) sum/2;                             //to find average of both array
	printf("Median of both arrays:%g \n",med);
    }
    else if(n%2==0 && m%2!=0)                        //teh first array is even and second array is odd go in
    {
	sum=(float) var2+var3;
	med=(float) sum/2;                                             //to find the average of both array
	printf("Median of both arrays:%g \n",med);
    }
    else if(n%2==0 && m%2==0)                           //the both array is even go in
    {
	sum=(float) var2+var4;
	med=(float) sum/2;                                      //to find the average of both arrays
	printf("Median of both arrays:%g \n",med);
    }
    return 0;
}

