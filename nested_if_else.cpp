#include<iostream>

using namespace std;

int num1,num2;

int main()
{
  cout<<"PLease give a random number:  ";
  cin>>num1;

  cout<<"PLease give a random number:  ";
  cin>>num2;

  if(num1>10)
  {
      if(num1>12)
      {
         cout<<"\nnum1 is greater than  12";
      }
    cout<<"\nnum1 is greater than  10";
  
  }
  else
  {
    cout<<"\nnum2 is greater than num1";
  }
}