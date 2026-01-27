//crate a code to implement namespace and use similar variable and functions defined in different code sections
#include <iostream>
using namespace std;
namespace First {
    int value = 42;
    void display() {
        cout << "First namespace value: " << value << endl;
    }
}
namespace Second {
    int value = 84;
    void display() {
        cout << "Second namespace value: " << value << endl;
    }
}

int main() {
    First::display();
    Second::display();
    return 0;
}