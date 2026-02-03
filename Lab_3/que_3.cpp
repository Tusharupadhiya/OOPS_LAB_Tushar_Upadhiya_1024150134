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
    friend void AddValues(A &obj1, B &obj2);
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
    friend void AddValues(A &obj1, B &obj2);
};

void AddValues(A &obj1, B &obj2){
     int sum = obj1.a+obj2.b;
     cout<<"Sum of a and b: "<<sum<<endl;
}

int main() {
    A obj1(5);
    B obj2(10);
    obj1.display();
    obj2.display();
    AddValues(obj1, obj2);
    return 0;
}