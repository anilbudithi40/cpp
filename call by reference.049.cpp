#include <iostream>
using namespace std;

// Function that swaps two numbers using call by reference
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "Before swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    // Call by reference
    swap(x, y);

    cout << "After swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}