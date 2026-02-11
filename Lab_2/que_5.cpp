#include <iostream>


using namespace std;

class Complex{
    float real;
    float imaginary;
    public:
    Complex(float r, float l){
        real = r;
        imaginary = l;
    }
    void displayComplex(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
    void sum(Complex c2){
        float r = real + c2.real;
        float l = imaginary + c2.imaginary;
        cout<<"Sum: "<<r<<" + "<<l<<"i"<<endl;
    }
};

int main() {
    Complex c1(3.5, 2.0);
    c1.displayComplex();
    Complex c2(1.2, 4.3);
    c2.displayComplex();
    c1.sum(c2);
    return 0;
}