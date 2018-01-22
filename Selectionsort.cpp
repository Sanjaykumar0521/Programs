//Selection sort
#include<iostream>
using namespace std;
int main()
{
cout<<"161210037\nSanjay Kumar\n";
 int a[20],n,i,j,min,l,c;
 cout<<"enter size of array ";
 cin>>n;
 cout<<"enter elements of array ";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 for(i=0;i<n-1;i++)
  {
   min=a[i];
   l=i;
   for(j=i+1;j<n;j++)
    {
     if(a[j]<min)
      {
       min=a[j];
       l=j;
      }
    }
    c=a[l];
    a[l]=a[i];
    a[i]=c;
  }
  cout<<"Array after sorting ";
 for(i=0;i<n;i++)
 {
  cout<<a[i]<<" ";
 }
 return 0;
}
