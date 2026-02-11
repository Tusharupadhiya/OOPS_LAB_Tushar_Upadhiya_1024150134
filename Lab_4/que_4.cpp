#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int *a = new int(n); 
    cout << "Value of a: " << *a << endl; 
    delete a; 
    return 0;
}