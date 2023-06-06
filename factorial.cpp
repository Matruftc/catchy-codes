#include<iostream>

using namespace std;

int num;
int factorial=1;

int main()
{
     cout<<"Enter a number: ";
     cin>>num;
    for(int initial=1;initial<=num;initial++)
     {
         factorial=factorial*initial;
     }

     cout<<"factorial Of  "<<num<<" is  "<<factorial;
}