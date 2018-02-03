#include<iostream>
#include<stdlib.h>
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
    complex operator *(complex c4)
    {
        complex res;
        if(((img>0)&&(c4.img>0))||((img<0)&&(c4.img<0)))
        {
            res.real=real*c4.real-img*c4.img;
        }
        else
        {
            res.real=real*c4.real+(-img)*c4.img;
        }
     res.img=real*c4.img+c4.real*img;
     return res;
    }
   void disp()
   {
       cout<<"the real and imaginary parts after multiplication are "<<real<<" "<<img;
   }
};

int main()
{
       cout<<"SANJAY KUMAR\n161210037\n";
 int r1,r2,im1,im2;
 cout<<"enter real and imaginary part of first complex number ";
 cin>>r1>>im1;
 cout<<"enter real and imaginary part of second complex number ";
 cin>>r2>>im2;
 complex c1(r1,im1);
 complex c2(r2,im2);
 complex c3=c1*c2;
 c3.disp();

}
