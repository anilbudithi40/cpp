#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int id;

public:
    // Setter method using 'this' pointer
    void setDetails(string name, int id) {
        this->name = name; // 'this->name' refers to the class member
        this->id = id;     // 'this->id' refers to the class member
    }

    // Display method
    void display() {
        cout << "Employee Name: " << this->name << endl;
        cout << "Employee ID: " << this->id << endl;
    }
};

int main() {
    Employee emp;

    emp.setDetails("Priya", 101);
    emp.display();

    return 0;
}