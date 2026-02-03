//create a function pass two objects as arguement and return an object
#include <iostream>
using namespace std;
class Complex{
    int real, imag;
    public:
    Complex(int r, int i){
        real = r;
        imag = i;
    }
    Complex add(Complex obj){
   Complex temp(0,0);
   temp.real = this ->real + obj.real;
   temp.imag = this ->imag + obj.imag;
   cout<<"Sum is: "<<temp.real<<" + i"<<temp.imag<<endl;
   return temp;
    }
};

int main() {
    Complex c1(2,3);
    Complex c2(4,5);
    
    Complex c3 = c1.add(c2);

   

 
    return 0;
}