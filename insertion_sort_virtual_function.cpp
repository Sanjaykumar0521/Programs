#include<iostream>
using namespace std;
int a[20],n;
class P
{
 public:
  void sort(int a[],int n);
  virtual void print(int a[],int n);
};

void P::sort(int a[],int n)
{ int temp,i,j;
 for(i=0;i<n;i++)
 {
  cin>>a[i];
  temp=a[i];
  j=i-1;
  while(j>=0 && temp>a[j])
  {
   a[j+1]=a[j];
   j=j-1;
  }
  a[j+1]=temp;
 }

}
void P::print(int a[],int n)
{int i,j;
 for(i=0;i<n;i++)
 {
  cout<<a[i]<<" ";
 }
}

class R:public P
{public:
 void resort(int a[],int n)
 { int i,j,c;
 for(i=0;i<n/2;i++)
 {
  c=a[i]; a[i]=a[n-1-i]; a[n-1-i]=c;
 }
 }
 void print(int a[],int n)
 {
 for(int i=0;i<n;i++)
 {
     cout<<a[i]<<" ";
 }
}
};

int main()
{
 cout<<"Sanjay Kumar\n161210037\n";
  P o;
  R ob;
  cout<<"enter size of array ";
  cin>>n;
  o.sort(a,n);
  cout<<"array sorted in descending order\n";
  o.print(a,n);
  ob.resort(a,n);
  cout<<"\narray sorted in ascending order\n";
  ob.print(a,n);
}
