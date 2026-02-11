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
    Rectangle r[3]= {Rectangle (), Rectangle (5), Rectangle (4,5)};
    r[0].Area();
    r[1].Area();
    r[2].Area();
    return 0;
}
