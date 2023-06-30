#include<iostream>
using namespace std;

class Teacher{
    private:
          int roll;
          string name;
          int age;

   public:
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
    Teacher s;
    s.input();
    s.show();
    return 0;
}