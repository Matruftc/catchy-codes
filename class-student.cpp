#include<iostream>
using namespace std;

class student{
    public:
          int roll;
          string name;
          int age;

   
      void input()
            {
                cout<<"Enter your roll no:";
                cin>>roll;
                
                cout<<"Enter your name:";
                cin>>name;

                cout<<"Enter your age:";
                cin>>age;
            }

            void show()
            {
                cout<<"\n your roll no:"<<roll;
                cout<<"\n your roll no:"<<name;
                cout<<"\n your roll no:"<<age;
            }
};

int main()
{
    student s;
    s.input();
    s.show();
    return 0;
}