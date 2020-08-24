#include<iostream>
using namespace std;

int swap(int *x,int *y)
{
	int temp;
    temp =*x;
	*x=*y;
	*y=temp;
}
int bubbleSort(int arr[],int n)
{
	int i,j;
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			    swap(&arr[j],&arr[j+1]);
		}
	}
}

int printArray(int *arr,int size)
{
	int i;
	for(i=0;i<size;i++)
	    cout<<arr[i]<<" ";
	    cout<<endl;
}

int main()
{
	int arr[]={30,10,5,20,40,30};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	bubbleSort(arr,n);
	cout<<"The sorted array is : ";
	printArray(arr,n);
}
