#include <iostream>
#include <cmath>
using namespace std;

// Define the function f(x) that takes a double as an argument
double f(double x) {
    int a,b,c;
    cin>>a>>b>>c;
    // Example: Let's define f(x) = x^2 + 2x + 1
    return (a*x * x) + (b*2 * x) + 1+c*sin(x);
}

int main() {
    // Define values for a and b
    double d = 3.0;
    double e = -1.5;

    // Compute f(a) and f(b)
    double resultA = f(d);
    double resultB = f(e);

    // Print the results
    std::cout << "f(" << a << ") = " << resultA << std::endl;
    std::cout << "f(" << b << ") = " << resultB << std::endl;

    return 0;
}
