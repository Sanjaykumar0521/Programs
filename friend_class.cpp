//Friend class
#include<iostream>
#include<stdlib.h>
#include<string>
#include<math.h>
using namespace std;
class Record
{
 string name;
 int acc_no;
 float bal;
 public:
void getdetails(string na,int acc,float ba)
 {
  name=na;
  acc_no=acc;
  bal=ba;
 }
 void print(Record &o)
 {
  cout<<"Name "<<o.name<<endl;
  cout<<"Account no "<<o.acc_no<<endl;
  cout<<"Balance "<<o.bal;
 }
 friend class Bank;
};

 class Bank
{
  float int_rate;
  int time;
  int n;
  public:
   void getdata(float r,int t,int a)
  {
   int_rate=r;
   time=t;
   n=a;
  }
  void SI(Record &a)
  {
    float si;
    si=(a.bal*int_rate*time)/100;
   a.bal=si+a.bal;
   cout<<"The simple interest is "<<si<<endl;
  }
  void CI(Record &b)
  {
   float ci=b.bal*pow(1+(int_rate/(n*100)),n*time);
   cout<<"The compoud interest is "<<ci<<endl;

  }
};

int main()
{
 Record obj1;
 Bank obj2;
 string name;
 int acc,t,n;
 float bal,r;
 cout<<"Enter details "<<endl;
 cout<<"Name  ";
 cin>>name;
 cout<<"Account no ";
 cin>>acc;
 cout<<"Balance ";
 cin>>bal;
 obj1.getdetails(name,acc,bal);
 cout<<"Enter interest rate in %, time, compoud time"<<endl;
 cin>>r>>t>>n;
 obj2.getdata(r,t,n);
 obj2.SI(obj1);
 obj2.CI(obj1);
 obj1.print(obj1);

}
