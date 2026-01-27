//Accessing a static variable
#include <iostream>
using namespace std;
class sample{
    static int count;
    public:
    void incrementCount(){
        count++;
        cout<<"Count: "<<count<<endl;

    }
};
int sample::count =0;
int main() {
    sample obj1, obj2, obj3;
    obj1.incrementCount();
    obj2.incrementCount();
    obj3.incrementCount();
    
    return 0;
}