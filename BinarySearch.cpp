#include<iostream>
using namespace std;

int bSearch(int[] ,int ,int ,int );

int main()
{
  int arr[100];
  cout<<"Enter the elements of the array : "<<endl;
  for(int i=0;i<5;i++)
  cin>>arr[i];
  int x;
  cout<<"Enter the element to be searched : "<<endl;
  cin>>x;
  int n=5;   //sizeof(arr)/sizeof(arr[0])
  int result=bSearch(arr,0,n-1,x);
  (result==-1)? cout<<"Element is not present in array"
              : cout<<"Element is present at index "<<result;	
             
  return 0;
}
int bSearch(int arr[],int low,int high,int x)
{
  if(low>high)
  return -1;
  int mid=(low+high)/2;
  if(arr[mid]==x)
  return mid;
  else if (arr[mid]>x)
  return bSearch(arr,low,mid-1,x);
  else
  return bSearch(arr,mid+1,high,x);
  
}
