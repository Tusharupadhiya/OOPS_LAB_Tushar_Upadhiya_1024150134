#include<iostream>
using namespace std;
int main(){
    int a =5;
    int b =10;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
    int temp = a;
    a=b;
    b=temp;
    cout<<"After swapping:"<<endl;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
    return 0;
}