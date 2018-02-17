#include<iostream>
#include<stdlib.h>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
};
void heapify(int arr[],int n,int i)
{
    int l=2*i+1;
    int r=2*i+2;
    int smallest=i;
    if(l<n && arr[l]<arr[smallest])
     {smallest=l;}
    if(r<n && arr[r]<arr[smallest])
     {smallest=r;}
    if(smallest!=i)
    {
        swap(&arr[i],&arr[smallest]);
        heapify(arr,n,smallest);
    }
};

void heapsort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
};

void display(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
};

int main()
{
    int arr[20],n,i;
    cout<<"enter size of array ";
    cin>>n;
    cout<<"enter elements of array ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    heapsort(arr,n);
    display(arr,n);
    return 0;
}
