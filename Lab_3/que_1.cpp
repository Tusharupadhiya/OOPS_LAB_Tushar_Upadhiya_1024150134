//program to implement (a) pointer to an object and (b) this pointer. practice both '.' and '->'
#include <iostream>
using namespace std;
class Sample{
    int data;
    public:
    void setData(int data){
        this-> data= data; //using '->' operator with this pointer
    }
    void displayData(){
        cout<<"Data: "<<data<<endl;
    }

};
int main() {
    Sample obj;
    Sample *ptr = &obj; //pointer to object
    ptr->setData(42); //using '->' operator with pointer to object
    ptr->displayData(); //using '->' operator with pointer to object
    obj.setData(84); //using '.' operator with object
    obj.displayData(); //using '.' operator with object
    return 0;
}