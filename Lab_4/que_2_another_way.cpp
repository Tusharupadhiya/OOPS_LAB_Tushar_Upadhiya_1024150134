//using default constructor
#include <iostream>
using namespace std;
class Rectangle{
    int length;
    int breadth;
    public:
    Rectangle(int l =0, int b=-1){
        length =l ;
        if (b==-1){
            breadth = l;
        }
        else{
            breadth = b;
        }

    }
    void Area(){
        cout<<"Area of rectangle is: "<<length*breadth<<endl;
    }
    ~Rectangle(){
        cout<<"Destructor called"<<endl;
     }
};

int main() {
    Rectangle R1;
    R1.Area();
    Rectangle R2(8,4);
    R2.Area();
    Rectangle R3(9);
    R3.Area();
    return 0;
}