#include <iostream>
using namespace std;
int main()
{

int base;
cout<<"Took a number : ";
cin>> base;

int side;
cout<<"Took another number : ";
cin>> side;

int height;
cout<<"Took a number : ";
cin>> height;

int area_of_triangle=1/2*(base*height);
cout <<"area is :   "<<area_of_triangle;

int perimeter_of_triangle=base+side+height;
cout <<"\nperimeter is :   "<<perimeter_of_triangle;

return 0;

}