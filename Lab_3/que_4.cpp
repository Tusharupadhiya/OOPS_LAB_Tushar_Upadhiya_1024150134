//program to apply friend class
#include<iostream>
using namespace std;
class A{
int a;
 public:
 A(int x){
    a = x;
    cout<<"in constructor of A with value: "<<a<<endl;
 }
 friend class B;
};
class B{
  public:
  void display(A &obj){
    cout<<obj.a;
  } 
};
int main(){
    A obj(10);
    B obj1;
    obj1.display(obj);
    return 0;
}