//convert from inches to centimeter
#include<iostream>
#include<stdlib.h>
using namespace std;
class converter
{
 int length;
 public:
  converter(int a)
  {
   length=a;
  }
 public:
 friend float to_cm(converter x);
 friend float to_inch(converter x);
 friend float to_km(converter x);
 friend float to_miles(converter x);
};

float to_cm(converter x)
{
 return((2.54)*(x.length));
}
 float to_inch(converter x)
{
 return((x.length)/(2.54));
}
 float to_km(converter x)
{
 return((x.length)*(1.609));
}
 float to_miles(converter x)
{
 return((x.length)/(1.609));
}

int main()
{
 float a;
 int n;
 while(n!=5)
 {
 cout<<"\nenter a number ";
 cin>>a;
 converter con(a);
 cout<<"\n1. from inch to cm\n";
 cout<<"2. from cm to inch\n";
 cout<<"3. from miles to km\n";
 cout<<"4. from km to miles\n";
 cout<<"5. to exit\n";
 cout<<"enter your choice\n";
 cin>>n;

  switch(n)
  {
   case 1:
    to_cm(con);
    cout<<"value in cm is "<<to_cm(con);
    break;
   case 2:
    to_inch(con);
    cout<<"value in inch is "<<to_inch(con);
    break;
   case 3:
    to_km(con);
    cout<<"value in km is "<<to_km(con);
    break;
   case 4:
    to_miles(con);
    cout<<"value in miles is "<<to_miles(con);
    break;
   case 5:
    exit(0);
   default :
    cout<<"wrong choice \n";
  }
 }
return 0;
}
