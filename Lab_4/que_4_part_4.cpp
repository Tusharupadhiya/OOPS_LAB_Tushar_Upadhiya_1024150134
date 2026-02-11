//dynamically allocating class objects using new operator
#include <iostream>
using namespace std;
class Rectangle{
    int length;
    int breadth;
    public:
  Rectangle(){length = 0;breadth=0;}
  Rectangle(int l , int b){
    length = l;
    breadth =b;
  }
  Rectangle(int x){
    length = x;
    breadth = x;
  }

  void Area();
  
 ~Rectangle(){
    cout<<"Destructor called"<<endl;
 }
};
void Rectangle::Area(){
    cout<<"Area of rectangle is: "<<length*breadth<<endl;
}
int main() {
    Rectangle *r1 = new Rectangle();
    r1->Area();
    Rectangle *r2 = new Rectangle(5,6);
    r2->Area();
    Rectangle *r3 = new Rectangle(9);
    r3->Area();
    delete r1;
    delete r2;
    delete r3;
    return 0;
}