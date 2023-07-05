
#include <iostream>
using namespace std;

class  height {
  private:
    int hght;

  public:
    
    height(int hght) {
      hght=hght ;
      cout << "Height = " << hght << endl;
    }
};

int main() {
  height o(189);
  return 0;
}