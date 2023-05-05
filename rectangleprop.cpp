#include <iostream>
using namespace std;
int main()
{

int length;
cout<<"Took a length number : ";
cin>> length;
int breath;
cout<<"Took a breath number : ";
cin>> breath;
int area_of_rectangle=length*breath;
cout <<"area is :   "<<area_of_rectangle;
int perimeter_of_rectangle=2*(length+breath);
cout <<"\nperimeter is :   "<<perimeter_of_rectangle;
return 0;

}