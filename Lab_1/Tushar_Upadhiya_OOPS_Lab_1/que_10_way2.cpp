#include<iostream>
using namespace std;
int main(){
    cout<<"Enter an integer: ";
    int a;
    cin>>a;
    if(a&1==0){
        cout<<a<<" is even"<<endl;
    }
    else{
        cout<<a<<" is odd"<<endl;
    }
    return 0;
}