#include <iostream>

// Global variable
int value = 100;

// Custom namespace
namespace MyNamespace {
    int value = 200;

    void showValues() {
        std::cout << "Value inside MyNamespace: " << value << std::endl;
        std::cout << "Global value using scope resolution: " << ::value << std::endl;
    }
}

int main() {
    std::cout << "Value in global scope: " << value << std::endl;

    // Accessing namespace variable
    std::cout << "Value in MyNamespace: " << MyNamespace::value << std::endl;

    // Calling function from namespace
    MyNamespace::showValues();

    return 0;
}