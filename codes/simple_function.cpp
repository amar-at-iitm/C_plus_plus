
#include<iostream>
using namespace std;

// Declaration of the function
double CalculateMinimum (double a, double b);

int main ()
{
    double x = 4.0, y = -8.0;
    double minimum_value;
    minimum_value = CalculateMinimum (x, y);

    cout << " The minimum of " << x << " and " << y
            << " is " << minimum_value << endl;

    cout << " The value of x didn't change it is still " << x << endl;
    return 0;
}
// definition of the function
double CalculateMinimum (double a, double b)
{
    double minimum;
    if (a < b)
    {
        minimum = a;
        a++;
    }
    else // a > b
    {
        minimum = b;
        a++;
    }

    return minimum;
}