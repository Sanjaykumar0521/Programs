//bank account program
#include<iostream>
#include<stdlib.h>
using namespace std;
int amt;
class bank_account
{
 //Data members
 char depositor_name[10];
 int account_number;
 char account_type[10];
 float balance;
 //member functions
 public:
 void getdata()
  {
   cout<<"Enter details\n";
   cout<<"Name ";
   cin>>depositor_name;
   cout<<"Account Number ";
   cin>>account_number;
   cout<<"Account Type ";
   cin>>account_type;
   cout<<"Balance ";
   cin>>balance;
  }
 void deposit()
 {
  cout<<"enter amount to deposit ";
  cin>>amt;
  balance=balance+amt;
  cout<<"the deposited amount is "<<amt;
  cout<<"\nbalance after deposition "<<balance<<"\n";
 }
 void withdraw()
 {
  cout<<"enter amount to withdraw ";
  cin>>amt;
  if(amt<=balance)
  {
  balance=balance-amt;
  cout<<"the withdrawal amount is "<<amt;
  cout<<"\nbalance after withdrawal "<<balance<<"\n";
  }
  else
   {
    cout<<"Do not have sufficient balance\n";
   }
 }
 void disp()
 {
  cout<<"Name "<<depositor_name<<"\nbalance "<<balance<<"\n";
 }
};

int main()
{
 bank_account bnk;
 bnk.getdata();
 int ch;
 while(ch!=4)
 {
  cout<<"\n1. To deposit \n"<<"2. To withdraw \n"<<"3. To view details  \n"<<"4. To exit \n";
  cout<<"\nenter your choice ";
  cin>>ch;
  switch(ch)
  {
   case 1:
    bnk.deposit();
    break;
   case 2:
    bnk.withdraw();
    break;
   case 3:
    bnk.disp();
    break;
   case 4:
    exit(0);
    break;
   default:
    cout<<"wrong choice \n";
  }
 }
}


