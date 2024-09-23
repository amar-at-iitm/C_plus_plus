#include <iostream>
#include <cmath> // To Use pow()

// Function to convert decimal to base 5
void decimalToBase5(int decimal) {
    // Find the largest power of 5 less than or equal to the decimal number
    int maxPower = 0;
    while (pow(5, maxPower) <= decimal) {
        maxPower++;
    }
    maxPower--;  // Step back to the largest valid power of 5

    std::cout << "The base 5 representation is: ";

    // Perform successive subtraction and print the digits as they are calculated
    for (int i = maxPower; i >= 0; i--) {
        int powerValue = pow(5, i);
        int coefficient = decimal / powerValue; // Get the coefficient (digit)
        std::cout << coefficient;  // Print the coefficient directly
        decimal -= coefficient * powerValue;    // Subtract the value
    }
    
    std::cout << std::endl;
}

int main() {
    int decimal;

    // Input the decimal number
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;

    // Convert the number to base 5
    decimalToBase5(decimal);

    return 0;
}
