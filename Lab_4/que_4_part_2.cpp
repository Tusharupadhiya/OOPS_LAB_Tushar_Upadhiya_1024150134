#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The elements in the array are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
}