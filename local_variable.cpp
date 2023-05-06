#include<iostream>

using namespace std;

void meth(){
    int a=10;
    cout<<"\nvalue of a is:"<<a;
}

int main(){
//cout<<"value of a is:"<<a;   here you get an errors ('a' was not declared in this scope)

int a=20;
cout<<"\nvalue of a is:"<<a; // I am a global var but here i am local
meth();  // i am just calling a method and here i did also
return 0;
}
