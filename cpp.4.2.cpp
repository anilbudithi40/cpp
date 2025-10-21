#include <iostream>
using namespace std;

// Function with default arguments
void greet(string name = "Guest", string message = "Welcome to our program!") {
    cout << "Hello, " << name << "! " << message << endl;
}

int main() {
    // Call with both arguments
    greet("Amit", "Hope you're having a great day!");

    // Call with only one argument
    greet("Priya");

    // Call with no arguments
    greet();

    return 0;
}