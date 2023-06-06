#include <iostream>
using namespace std;

void show(int num1,int num2) 
{
  cout<<"\ni am a function dear: "<<num1<<" AND "<<num2;

}

void show(int num1) 
{
  cout<<"\ni am a integer: "<<num1;

}

void show(float num2)
{
  cout<<"\ni am a float: "<<num2;
}

int main() {

  int n1=10;
 float n2=12.34;
 
  show(n1);
  show(n2);
  show(n1,n2); 

}