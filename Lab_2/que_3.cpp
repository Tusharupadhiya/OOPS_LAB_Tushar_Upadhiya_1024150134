#include <iostream>


using namespace std;
class C{
    void putData(){
        cout<<"Accessing putData (private member function) of class C"<<endl;
    }
   public:
    void display(){
        cout<<"Accessing display (public member function) of class C"<<endl;
        putData();
}
};



int main() {
    C obj;
    obj.display();
    return 0;
}