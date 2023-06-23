#include<iostream>

using namespace std;

int main()
{
    int arr[2];
    int *ptr;

    ptr=&arr[0];
    cout<<"\n"<<ptr;

    ptr=&arr[1];
    cout<<"\n"<<ptr;

    ptr=&arr[2];
    cout<<"\n"<<ptr;
}    