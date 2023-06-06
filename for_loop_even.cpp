#include<iostream>

using namespace std;

int num=0;
int range;

int main()
{
    cout<<"PLease give a random number:  ";
    cin>>range;

    for( num=0;num<range;num++)
    {
         cout<<"\nvalue of num:  "<<2*num;
    }
}