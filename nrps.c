#include<stdio.h>
/*
Name: R DEVANARAYANAN
Date: 15/08/2023
Title: Generate consecutive NRPS of length n using k distinct character
Sample I/O: Enter the number characters C : 3
            Enter the Length of the string N : 6
            Enter 3 distinct characters : a b c
Sample O/P: Possible NRPS is abcbca
 */
void nrps(char [], int, int);                                         //function prototype
int main()
{
    int c,n,i;
    printf("Enter the number characters C : ");
    scanf("%d",&c);
    printf("Enter the Length of the string N : ");
    scanf("%d",&n);
    char arr[n];
    printf("Enter 3 distinct characters : ");
    for(i=0;i<c;i++)      
    {
	scanf(" %c",&arr[i]);
    }
    nrps(arr,c,n);                                                    //function call
    return 0;
}
void nrps(char * arr, int c, int n)                                   //function definition
{
    int i, j;
    int k=0;
    for(i = 0; i < c; i++)                                            // check for duplicates
    {
	for(j = 0; j < c; j++)
	{
	    if((arr[i] == arr[j]) && (j != i))
	    {
		printf("Error : Enter distinct characters");          //if duplicate found print this error message
		return;
	    }
	}
    }
    printf("Possible NRPS is ");
    for(i=0;i<n;i++)                                                      
    {
	if(i%c==0 && i!=0)                                                //incrementing k if i is divisible by C
	{
	    k++;
	}
	printf("%c",*(arr+((i+k)%c)));                                   //printing the character
    }
}
