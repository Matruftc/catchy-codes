#include<iostream>
using namespace std;

class room
{
    public: 
             int length;
             int breath;
             int height; 

            int area()
            {
                 return length*breath;
            }  

            int volume()
            {
                return length*breath*height;
            }   
};

int main()
{
    room room1;
    room1.length=12;
    room1.breath=12;
    room1.height=12;

    cout<<"\nArea is:"<<room1.area();
    cout<<"\nVolume is:"<<room1.volume();
    return 0;
}