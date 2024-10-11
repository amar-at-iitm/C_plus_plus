
#include <iostream>
#include "gauss.hpp"

using namespace std;

double funcf (double x);			// the function f can be anything
									// need not be exactly integrable

double integrate_funcf (double x);	// exact integral if it can be 
									// determined

int main ()
{
	double result;
	Gaussquad a;		// uses the default constructor

	cout << "The  difference between the approximation i.e. " << endl 
			<< " Gaussian quadrature and exact integration of " << endl
			<< " 3 x^5 + 4 x^4 + 6 x^3 + 3 x^2 + x + 2  from " << endl
			<< " -1 to 1 is = " 
			<< abs (a.integrate (funcf) - integrate_funcf (1) + 
							integrate_funcf (-1)) << endl;
	return 0;
}

double funcf (double x)
{
	double result = 0.0;
	result += 3 * pow (x, 5) + 4 * pow (x, 4) 
			+ 6 * pow (x, 3) + 3 * pow (x, 2)
			+ x + 2;
	return result;
}

// exact integration of x
double integrate_funcf (double x)
{
    double result = 0.0;
    result += 3 * pow (x, 6) / 6 + 4 * pow (x, 5) / 5
            + 6 * pow (x, 4) / 4 + 3 * pow (x, 3) / 3
            + pow (x, 2) / 2 + 2 * x;
    return result;
}