#include <iostream>
using namespace std;


int show(int num1,float num2)
{
   return(num1+num2);  // return statement works here
}

int main() {

  int n1=10;
  float n2=12.34;

  int sum= show(n1,n2);
  cout<<"Addition of two num is through return : "<<sum;

}