#include<iostream>
using namespace std;
class rectangle{
    int length;
    int breadth;
    public:
    rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    int area(){
          return length*breadth;
     }
   
};
int main(){
    rectangle rect[3]= {rectangle(2,3), rectangle(4,5), rectangle(6,7)};
    for (int i=0;i<3;i++){
        cout<<"Area of rectangle "<<i+1<<" is :  " <<rect[i].area()<<endl;
    }
    return 0;
}