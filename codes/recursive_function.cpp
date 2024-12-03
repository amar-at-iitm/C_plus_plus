
#include <iostream>
#include <cassert>
using namespace std;

int CalculateFactorial (int n);

int main ()
{
    int n;
    cout << "Enter a number n " << endl;
    cin >> n;
    cout << " The factorial of = " << n
            << " is " << CalculateFactorial (n) << endl;

    return 0;
}

int CalculateFactorial (int n)
{
    assert (n > 0);
    if (n == 1)
    {
        return 1;
    } else {
        // n > 1
        return (n * CalculateFactorial (n - 1));
    }
}