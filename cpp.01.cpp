#include <iostream>

// Corrected recursive factorial function
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1); // Fixed: recursive call was incomplete
    }
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Negative number" << std::endl; // Capitalized for clarity
    } else {
        long long result = factorial(num);
        std::cout << "Factorial of " << num << " is: " << result << std::endl;
    }

    return 0;
}