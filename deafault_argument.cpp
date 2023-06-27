#include<iostream>

using namespace std;

int sum(int a=1,int b=2)
{
    return(a+b);
}

int main()
{
  cout<<"\nValue is: "<<sum();
  cout<<"\nValue is: "<<sum(2);
  cout<<"\nValue is: "<<sum(2,5);
  cout<<"\nValue is: "<<sum(0,9);
}

