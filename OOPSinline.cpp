#include <iostream>

// This inline function returns the larger of two numbers using the ternary operator.
inline int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 15;
    int num2 = 8;

    int result = max(num1, num2);
    std::cout << "The greater number is: " << result << std::endl;

    // A second example with different numbers.
    int num3 = 5;
    int num4 = 25;
    int result2 = max(num3, num4);
    std::cout << "The greater number is: " << result2 << std::endl;

    return 0;
}