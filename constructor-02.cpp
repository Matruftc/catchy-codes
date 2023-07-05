
#include <iostream>
using namespace std;

class  sum 
{
  private:
    int num1;
    int num2;

    public: sum(int a, int b);
            void show();
}; 
  sum::sum(int a, int b)
  {
    num1=a;
    num2=b;
  } 

  void sum :: show()
  {
    cout<<"Sum of two number is: "<<num1+num2;
  }

  main()
  {
    sum obj(19,20);
    obj.show();
  }        