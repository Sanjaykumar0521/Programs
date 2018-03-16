#include<iostream>
using namespace std;
int main()        //main function
{
 int c[10],w[20],i,j,n,temp,temp1,t;
 float s[20],sum=0,wt=0;
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
 for(i=0;i<n;i++)
 {
  s[i]=c[i]/w[i];
 }
  //bubble sort
 for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;i++)
    {
     if(s[j]<s[j+1])
      {
       temp=s[j];
       s[j]=s[j+1];
       s[j+1]=temp;

       temp1=w[j];
       w[j]=w[j+1];
       w[j+1]=temp1;

       t=c[j];
       c[j]=c[j+1];
       c[j+1]=t;
      }
    }
  }
for(i=0;i<n;i++)
{
 cout<<c[i]<<" "<<w[i]<<" "<<s[i]<<endl;
}
 for(i=0;i<n;i++)
 {
 if(w[i]<wt)
  {
   sum=sum+w[i]*s[i];
   wt=wt-w[i];
  }
 else
  {
   sum=sum+c[i]*(wt/w[i]);
   wt=0;
  }
 }

 cout<<"the total profit is "<<sum;

return 0;
}
