#include<iostream>
using namespace std;
void merge(int a[],int low,int mid,int high)
{
    int i,lo,k,temp[50],mi;
    lo=low;
    i=low;
    mi=mid+1;
    while((lo<=mid)&&(mi<=high))
    {
        if(a[lo]<=a[mi])
        {
            temp[i]=a[lo];
            lo++;
        }
        else
        {
            temp[i]=a[mi];
            mi++;
        }
        i++;
    }
       if(lo>mid)
       {
           for(k=mi;k<=high;k++)
           {
               temp[i]=a[k];
               i++;
           }
       }
       else
       {
           for(k=lo;k<=mid;k++)
           {
               temp[i]=a[k];
               i++;
           }
       }
      for(k=low;k<=high;k++)
      {
          a[k]=temp[k];
      }
}
void partition(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        partition(a,low,mid);
        partition(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

int main()
{
    int a[50],size,i;
    cout<<"enter size of array ";
    cin>>size;
    cout<<"enter element of array ";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
   partition(a,0,size-1);
   cout<<"array after sorting ";
   for(i=0;i<size;i++)
   {
       cout<<a[i]<<" ";
   }
  return 0;
}
