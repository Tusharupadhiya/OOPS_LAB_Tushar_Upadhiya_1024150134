//swap private values of two classes using friend function
#include <iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    A(int val){
        a = val;
    }
    void display(){
        cout<<"Value of a: "<<a<<endl;
    }
    friend void swapValues(A &obj1, B &obj2);
};
class B{
    int b;
    public:
    B(int val){
        b = val;
    }
    void display(){
        cout<<"Value of b: "<<b<<endl;
    }
    friend void swapValues(A &obj1, B &obj2);
};
void swapValues(A &obj1, B &obj2){
    int temp = obj1.a;
    obj1.a = obj2.b;
    obj2.b = temp;
}
int main(){
    A obj1(10);
    B obj2(20);
    cout<<"Before swapping: ";
    obj1.display();
    obj2.display();
    swapValues(obj1, obj2);
    cout<<"After swapping: ";
    obj1.display();
    obj2.display();
}