#include<iostream>
using namespace std;

void insertionSort(int arr[],int n)
{
	int i,j,key;
	
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
		
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
	int arr[]={25,20,40,30,45,40,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr,n);
	cout<<"The sorted array is : ";
	printArray(arr,n);
}
