#include<iostream>

using namespace std;

int num1,num2;

int main()
{
  cout<<"PLease give a random number:  ";
  cin>>num1;

  cout<<"PLease give a random number:  ";
  cin>>num2;

  if(num1>num2)
  {
    cout<<"num1 is greater than  num2";
  }
  if(num1==num2)
  {
    cout<<"num2 is equal to num1";
  }
  else{
    cout<<"num2 is greater than  num1"; 
  }
}