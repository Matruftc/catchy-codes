#include <iostream>

using namespace std;

int main(){
    int side_of_square;
    cout<<"Took a side dear: ";
    cin>> side_of_square;
    int area_of_square=side_of_square*side_of_square;
    int perimeter_of_square=4*side_of_square;
    cout <<"square of two number is :   "<<area_of_square;
    return 0;
}