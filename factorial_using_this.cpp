#include<iostream>
using namespace std;
class fac
{
 public:
 int n;
  fac(int n)
  {
   this->n=n;
  }
  int fact(int n);
};

int fac::fact(int n)
{
 if(n==1 || n==0)
  return 1;
 else
  return (fact(n-1)*n);
}

int main()
{
 cout<<"Sanjay Kumar\n161210037\n";
 int n;
 fac ob(n);
 cout<<"enter a number ";
 cin>>n;
 cout<<"the factorial of the number is "<<ob.fact(n);
}
