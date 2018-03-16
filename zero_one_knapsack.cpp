#include<iostream>
#include<math.h>
using namespace std;
 int c[10],w[20],i,j,n,temp,temp1,t;
 float s[20],sum=0,wt=0;

int knap(int n, int m)
{
 if(m==0 || n==0)
 {
  return 0;
 }
 else if(w[n]>m)
 {
  return (knap(n-1,m));
 }
 else
  {
   int a=knap(n-1,m-w[n])+c[n];
   int b=knap(n-1,m);
   return(max(a,b));
  }

}

int main()
{
 cout<<"enter total number of items ";
 cin>>n;
 cout<<"enter knapsack weight ";
 cin>>wt;
 cout<<"enter the profit of items ";
 for(i=0;i<n;i++)
 {
  cin>>c[i];
 }
 cout<<"enter weight of items ";
 for(i=0;i<n;i++)
 {
  cin>>w[i];
 }

 int p=knap(n,wt);
 cout<<"the maximum profit is "<<p;

 return 0;
 }


