#include <iostream>
using namespace std;


void show(int num1,float num2)    //i was passed on a integer and a float lets see whether it take both int
{
 cout<<"\ni am a integer: "<<num1;
 cout<<"\ni am a float: "<<num2;
}

int main() {

  int n1=10;
  int n2=12.34;      // here i was just changing the datatype

  show(n1,n2);

}

// hurray  you did not getting a error