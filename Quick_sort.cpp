#include<iostream>
using namespace std;
 void swap(int *x, int *y)
 {
     int temp;
     temp=*x;
     *x=*y;
     *y=temp;
 };

int partition(int *a,int low,int high)
{
  int pivot=a[high];
   int pi=low;
    for(int i=low;i<high;i++)
    {
        if(a[i]<=pivot)
        {
            swap(&a[i],&a[pi]);
            pi++;
        }
    }
    swap(&a[pi],&a[high]);
    return pi;
};

void quicksort(int *a,int low,int high)
{
    if(low<high)
    {
       int pi=partition(a,low,high);
        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
    }
};

int main()
{
 int a[20],i,n;
 cout<<"enter size of array ";
 cin>>n;
 cout<<"enter elements of array ";
 for(i=0;i<n;i++)
 {
     cin>>a[i];
 }
 quicksort(a,0,n-1);
 for(i=0;i<n;i++)
 {
     cout<<a[i]<<" ";
 }
    return 0;
}
