#include <iostream>
using namespace std;

void merge( int arr[], int l, int m ,int r)
{
	
	int n1=m-l+1,n2=r-m;
	
	int left[n1];
	int right[n2];
	for (int i=0;i<n1;i++)
	{ 
	   left[i]=arr[l+i];	
	}

	for (int j=0;j<n2;j++)
	{ 
		right[j]=arr[m+1+j];
	}
	int i=0,j=0,k=l;
	while(i<n1 && j<n2)
	{ if (left[i]<=right[j])
		{
			arr[k]=left[i];
			i++;
		}
	  else
	    {
		     arr[k]=right[j];
		     j++;
		}
		k++;
	}
	while(i<n1)
	{  arr[k++]=left[i++];
	}	
	while(j<n2)
	{  arr[k++]=right[j++];
	}	
 
}

void mergesort(int arr[],int l,int r)
{	 if(r>l)
	{
		int m=l+(r-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}

}

int main()
{
	int size,result;
	cout<<"Enter the size of the array- ";
	cin>>size;
	int *array=new int[size];
	cout<<endl<<"Enter the elements the array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	mergesort(array,0,size-1);
	cout<<endl<<"Sorted Array is "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}	
	return 0;
}
