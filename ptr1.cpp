#include<iostream>

using namespace std;

int main()
{
  int *ptr,var;

  var=12;
  ptr=&var;
  *ptr=23; // changing the value of pointer

  cout<<*ptr;
  cout<<"\nIt was an address:"<<&var;

}  