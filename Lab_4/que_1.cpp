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

};
void Rectangle::Area(){
    cout<<"Area of rectangle is: "<<length*breadth<<endl;
}
int main() {
    Rectangle R1;
    R1.Area();
    Rectangle R2(8,4);
    R2.Area();
    Rectangle R3(9);
    R3.Area();

    return 0;
}