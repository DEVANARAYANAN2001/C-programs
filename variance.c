#include<stdio.h>
#include<stdlib.h>
/*
Name: R DEAVNARAYANAN
Date: 02 aug 2023
Title: Variance calculation with dynamic arrays
Sample I/O: Enter the no.of elements : 10
            [0] -> 9
            [1] -> 12
            [2] -> 15
            [3] -> 18
            [4] -> 20
            [5] -> 22
            [6] -> 23
            [7] -> 24
            [8] -> 26
            [9] -> 31
Sample O/P: Variance is 40.000000
*/

float variance(int *, int);
int main()
{
    int num;
    float ret; 
    printf("Enter the no.of elements : ");         //to raed number of elements from the user
    scanf("%d",&num);
    int *arr;                                     //to declared the pointer array
    arr=calloc(num,sizeof(int));                 //to allocate the memory dynamically
    for(int i=0;i<num;i++)
    {
	scanf("%d",&arr[i]);                    //read the elements from the users
    }
    printf("Enter the %d elements:\n",num);
    for(int i=0;i<num;i++)
    {
	printf("[%d] -> %d ",i,arr[i]);
	printf("\n");
    }
   ret = variance(arr,num);                  //function calling
    printf("Variance is %f\n",ret);          //to print the output of variance
}
float variance(int *arr, int num)
{
    float mean,sum=0;
    for(int i=0;i<num;i++)
    {
	sum=sum+arr[i];               //to add the all elements and the value will stored to the sum variable
    }
    mean=sum/num;                    //to find the mean value
//    printf("mean %d\n",mean);
    float d[num];
    float d_sqr[num];
    float sum1=0;
    for(int j=0;j<num;j++)
    {
	d[j] = arr[j] - mean;                //to find the d value
	d_sqr[j] = (d[j]) * (d[j]);          //to find the d^2 value
	sum1 = sum1 + d_sqr[j];           //to add the all d^2 elements and store the sum variable
    }
//    printf("sum1 %d\n",sum1);
    float variance=sum1/num;                    //to find the variance value
//    printf("variance %f\n",variance);
    return variance;                           //to return the variance value

}
