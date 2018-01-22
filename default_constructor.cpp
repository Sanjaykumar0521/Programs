//calculator program using constructor
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
class prime
{ int a;
public:
  prime(int a)
  {
   if(a%2==0)
   {
    cout<<"not a prime number ";
   }
  else
   {
    for(int i=3;i<sqrt(a);i+=2)
     {
      if(a%i==0)
       {
        cout<<"not a prime number ";
       }
      else
       {
        cout<<"prime number";
       }
     }
   }
  }
};

int main()
{
 prime obj(15);

return 0;
}
