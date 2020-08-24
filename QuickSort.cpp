#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int arr[],int low,int high)
{
	int pivot=arr[high];
	int i=(low-1);
	
	for(int j=low;j<=high-1;j++)
	{
	    if(arr[j]<pivot)
	    {
	    	i++;
	    	swap(&arr[i],&arr[j]);
		}
	}
	swap(arr[i+1],arr[high]);
	
	return i+1;
}

int quickSort(int arr[],int low,int high)
{
	if(low<high)
	{
		int pi=partition(arr,low,high);
		
		quickSort(arr,low,pi-1);
		quickSort(arr,pi+1,high);
	}
}

int main()
{
	int size;
	cout<<"Enter the size of the Array : ";
	cin>>size;
	int *arr=new int[size];
	cout<<"Enter the elements of the array : "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	quickSort(arr,0,size-1);
	cout<<endl<<"The sorted array is : "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
