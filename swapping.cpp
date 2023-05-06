#include<iostream>

using namespace std;

int main(){
    int first_number=10;
    int second_number=20;
    int third_number=30;

    cout<<"\nBefore swap first number is  :"<<first_number;
    cout<<"\nBefore swap second number is  :"<<second_number;
    cout<<"\nBefore swap third number is  :"<<third_number;

    first_number=second_number;
    second_number=third_number; 
    third_number=first_number;
    
    cout<<"\nAfter swap first number is  :"<<first_number;
    cout<<"\nAfter swap second number is  :"<<second_number;
    cout<<"\nAfter swap third number is  :"<<third_number;
}