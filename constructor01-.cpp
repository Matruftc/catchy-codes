
#include <iostream>
using namespace std;

class  sum 
{
  private:
    int num1;
    int num2;

    public: sum();
            void show();
}; 
  sum::sum()
  {
    num1 =10;
    num2 =20;
  }  

  void sum :: show()
  {
    cout<<"Sum of two number is: "<<num1+num2;
  }

  main()
  {
    sum obj;
    obj.show();
  }        