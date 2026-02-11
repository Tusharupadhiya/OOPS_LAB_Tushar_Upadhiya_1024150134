//dynamically allocating array of objects using new operator
#include <iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;
    public:
  Rectangle(){length = 0;breadth=0;}
  Rectangle(int l , int b){
    length = l;
    breadth =b;
  }
  Rectangle(int x){
    length = x;
    breadth = x;
  }

  void Area();
  
 ~Rectangle(){
    cout<<"Destructor called"<<endl;
 }
};
void Rectangle::Area(){
    cout<<"Area of rectangle is: "<<length*breadth<<endl;
}

int main() {
    int n;
    cout<<"Enter the number of rectangles: ";
    cin>>n;
    Rectangle *arr = new Rectangle[n];
    for(int i=0; i<n; i++){
        int l,b;
        cout<<"Enter length and breadth of rectangle "<<i+1<<": ";
        cin>>l>>b;
        arr[i] = Rectangle(l,b);
    }
    for(int i=0; i<n; i++){
        arr[i].Area();
    }
    delete[] arr;
    return 0;
}