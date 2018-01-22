#include<iostream>
using namespace std;
class complex
{
 int real,img;
 public:
 complex(int a=0,int b=0)
 {
  real=a;
  img=b;
 }
 complex operator +(complex c4)
 {
  complex res;
  res.real=real +c4.real;
  res.img=img+c4.img;
  return res;
 }
 void print()
 {
  cout<<"addition of two complex number is "<<real<<"+i"<<img;
 }
};

int main()
{
 complex c1(1,7);
 complex c2(4,6);
 complex c3=c1+c2;
 c3.print();

}
