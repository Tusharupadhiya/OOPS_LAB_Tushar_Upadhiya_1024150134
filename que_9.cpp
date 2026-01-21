#include<iostream>
using namespace std;
int main(){
   int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    char x;
    cin>>x;
    switch(x){
        case '+':
            cout<<"Sum: "<<a+b<<endl;
            break;
        case '-':
            cout<<"Difference: "<<a-b<<endl;
            break;
        case '*':
            cout<<"Product: "<<a*b<<endl;
            break;
        case '/':
            cout<<"Quotient: "<<a/b<<endl;
            break;
        default:
            cout<<"Invalid operator"<<endl;
    }
    return 0;
}