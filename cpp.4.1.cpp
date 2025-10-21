#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two floating-point numbers
float add(float a, float b) {
    return a + b;
}

int main() {
    int x = 5, y = 10, z = 15;
    float p = 2.5f, q = 3.7f;

    cout << "add(int, int): " << add(x, y) << endl;
    cout << "add(int, int, int): " << add(x, y, z) << endl;
    cout << "add(float, float): " << add(p, q) << endl;

    return 0;
}