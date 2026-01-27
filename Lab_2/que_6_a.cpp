//Use of scope resolution operator
#include <iostream>


using namespace std;
class Sample{
    int x;
    public:
  void displayValue();
  void setValue(int val);

};
void Sample::setValue(int val){
    x = val;
}
void Sample::displayValue(){
    cout<<"Value of x is: "<<x<<endl;
}

int main() { 
    Sample obj;
    obj.setValue(10);
    obj.displayValue();
    return 0;
}