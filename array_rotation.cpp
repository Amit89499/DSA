#include<iostream>
using namespace std;
 
void leftRotate(int arr[],int n)
{
    int temp=arr[0],i;
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

void rotate(int arr[],int d,int n)
{
    int i;
    for(i=0;i<d;i++)
       leftRotate(arr,n);
       
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        rotate(arr,d,n);
        for(int j=0;j<n;j++)
            cout<<arr[j]<<" ";
            cout<<endl;
    }
}











