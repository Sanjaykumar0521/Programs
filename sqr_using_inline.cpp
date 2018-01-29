//square a number using inline function
#include <iostream>
#include<stdlib.h>
using namespace std;
inline int sqr(int n)
{
 return(n*n);
}

int main()
{
 int a;
 cout<<"enter a number ";
 cin>>a;
 cout<<"the square of number is "<<sqr(a);
 return 0;
}
