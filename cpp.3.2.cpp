#include <iostream>
using namespace std;

// Class definition
class Student {
private:
    
    string name;
    int age;

public:
   
    void setDetails(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }


    void displayDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    }
};

int main() {
    Student s1;

    s1.setDetails("Amit", 20);
    s1.displayDetails();

    return 0;
}