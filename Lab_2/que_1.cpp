//structure in C++ containing details of a student
#include <iostream>
using namespace std;
struct Student {
    string name;
    float cgpa;
    string roll_number;
    string hostel;
    string degree;
    void addDetails(string n, float c, string r, string h, string d) {
        name = n;
        cgpa = c;
        roll_number = r;
        hostel = h;
        degree = d;
    }
    void updateCGPA(float new_cgpa) {
        cgpa = new_cgpa;
    }
    void updateHostel(string new_hostel) {
        hostel = new_hostel;
    }
    void updateDetails(string n, float c, string r, string h, string d) {
        name = n;
        cgpa = c;
        roll_number = r;
        hostel = h;
        degree = d;
    }

     void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Degree: " << degree << endl;
     }


};

int main(){
    Student student1;
    student1.addDetails("Tushar", 8.63, "1024150134", "Viyat Hall" , "B.Tech EnC");
    cout << "Initial Details:" << endl;
    student1.displayDetails();
    student1.updateCGPA(9.0);
    student1.updateHostel("Ambaram Hall");
    cout << "\nUpdated Details:" << endl;
    student1.displayDetails();
    student1.updateDetails("Tushar Upadhiya", 9.0, "1024150134", "Arambham Hall", "B.Tech EnC");
    cout << "\nFinal Updated Details:" << endl;
    student1.displayDetails();

    return 0;
}