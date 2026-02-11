#include <iostream>
using namespace std;
class sample{
    int a;
    public:
    // default constructor
    sample() {
        a = 0;
    }
    sample(int x){
        a = x;
    }
    void display(){
        cout<<"Value of a is: "<<a<<endl;
    }
    ~sample(){
        cout<<"Destructor called"<<endl;
    }
    // ~sample(){
    //     cout<<"Destructor called again"<<endl;       //(this will g)
    //  }
};

int main() {
    sample s1; // uses default constructor
    s1.display();

    sample s2(5); // uses parameterized constructor
    s2.display();
    return 0;
}