#include <iostream>
#include <string> 

using namespace std;

class Student {
private:
    string name;
    long long roll_no;
    string degree;
    string hostel;
    float cgpa;

public:
    void addDetails() {
        cout << "Enter name: ";
        getline(cin >> ws, name); 
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter degree: ";
        getline(cin >> ws, degree);
        cout << "Enter hostel: ";
        getline(cin >> ws, hostel);
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void displayDetails() const { 
        cout << "Name: " << name << "\nRoll No: " << roll_no 
             << "\nDegree: " << degree << "\nHostel: " << hostel 
             << "\nCGPA: " << cgpa << endl;
    }
    void updateCgpa(float c) { cgpa = c; }
    
    void updateHostel(string h) { hostel = h; }

    void updateDetails(long long r, string d, float c) {
        roll_no = r;
        degree = d;
        cgpa = c;
    }
};

int main() {
    Student s;
    s.addDetails();
    s.displayDetails();

    
    s.updateCgpa(9.0);
    s.updateHostel("Ramanujan Hall");
    
    cout << "\nAfter Updates:";
    s.displayDetails();

    return 0;
}