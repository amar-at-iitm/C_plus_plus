
#include <iostream>
using namespace std;

double myFunction (double x);
double myotherFunction (double x);

int main ()
{

    double (*p_function) (double x);

    p_function = &myFunction;
    cout << p_function (2.0) << endl;

    p_function = &myotherFunction;
    cout << p_function (2.0) << endl;

    return 0;
}

double myFunction (double x)
{
    return (x * x);
}

double myotherFunction (double x)
{
    return (x * x * x);
}