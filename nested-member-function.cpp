#include<iostream>
using namespace std;

void foo(int a)
{
    cout<<a<<endl;
}

void fool()
{
    cout<<foo<<endl;
 
}
int main()
{
    foo(10);
   
}