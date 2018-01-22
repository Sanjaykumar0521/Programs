//Bubble sort

#include<iostream>
using namespace std;
int main()
{
cout<<"161210037\nSanjay Kumar\n";
int a[20],i,j,n,c;
cout<<"enter the maximum size of array ";
cin>>n;
cout<<"enter elements of array ";
for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
//sorting
for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-i-1;j++)
   {
    if(a[j+1]<a[j])
     {
      c=a[j];
      a[j]=a[j+1];
      a[j+1]=c;
     }
   }
 }
//array after sorting
cout<<"Array after sorting\n";
for(i=0;i<n;i++)
 {
  cout<<a[i]<<" ";
 }
return 0;
}
