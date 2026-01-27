//Accessign a global variabble using scope resolution operator
#include <iostream>


using namespace std;
int x = 20;
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
    cout<<"Value of local x is: "<<x<<endl;
    cout<<"Value of global x is: "<<::x<<endl;
}




int main() { 
    Sample obj;
    obj.setValue(10);
    obj.displayValue();
    
    return 0;
}