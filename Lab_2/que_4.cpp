#include <iostream>


using namespace std;

class Rectangle{
    int width,height;
    public:
    void getData(int w , int h){
        width = w;
        height = h;
        
    }
    int calculatearea(){
        cout<<"Area of rectangle is: ";
        return width*height;
}
};

int main() {
    Rectangle rect;
    rect.getData(5,10);
    cout<<rect.calculatearea()<<endl;
    return 0;
}