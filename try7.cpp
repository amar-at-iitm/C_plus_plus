#include <iostream>
#include <muParser.h>
#include <string>

using namespace std;

int main() {
    string function;
    double a;

    // Get user input for the function and value of x
    cout << "Enter the mathematical function f(x): ";
    getline(cin, function);

    cout << "Enter the value of x (a): ";
    cin >> a;

    try {
        // Create a parser object
        mu::Parser parser;

        // Define the variable 'x' that will be used in the function
        double x = a;
        parser.DefineVar("x", &x);

        // Set the function as the expression
        parser.SetExpr(function);

        // Evaluate the function for the given x
        double result = parser.Eval();

        // Output the result
        cout << "The value of f(" << a << ") is: " << result << endl;
    } catch (mu::Parser::exception_type &e) {
        // Handle any parsing or evaluation errors
        cerr << "Error: " << e.GetMsg() << endl;
    }

    return 0;
}
