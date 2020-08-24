#include<iostream>
using namespace std;

int swap(int *x,int *y)
{
	int temp;
    temp =*x;
	*x=*y;
	*y=temp;
}
int selectionSort(int arr[],int n)
{
	int i,j,min_indx;
	
	for(i=0;i<n;i++)
	{
		min_indx=i;
		for(j=i+1;j<n-1;j++)
		{
			if(arr[j] < arr[min_indx])
			{
				min_indx = j; 
				
			}
		}
		swap(&arr[min_indx],&arr[i]);
	}
}
int printArray(int arr[],int size)
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
	
	selectionSort(arr,n);
	cout<<"The sorted array is : ";
	printArray(arr,n);
}
