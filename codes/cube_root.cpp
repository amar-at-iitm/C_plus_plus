
#include <iostream>
#include <cmath>
using namespace std;

void CalculateCubeRoot (double& x, double k,
                        double tolerance = 1.0e-6,
                        int maxiterations = 100);
int main ()
{
    double x;
    double k;
    
    cout << "Enter the initial guess" << endl;
    cin >> x;
    cout << "Enter k of which the cube root is to be obtained" << endl;
    cin >> k;


    // Calculate Cube root using default values
    CalculateCubeRoot (x, k);
    cout << "the cube root of " << k << " is  = " << x << endl; 

    // calculate cube root using a tolerance of 0.001 and the 
    // default maximum number of iterations 
    double tolerance = 0.0001;
    CalculateCubeRoot (x, k, tolerance);
    cout << "the cube root of " << k << " is  = " << x << endl; 

    // calculate cube root using a tolerance of 0.001 and a
    // maximum number of iterations of 50
    int maxiterations = 500;
    CalculateCubeRoot (x, k, tolerance, maxiterations);

    cout << "the cube root of " << k << " is  = " << x << endl; 

    return 0;
}

void CalculateCubeRoot (double& x, double k,
                        double tolerance,
                        int maxiterations)
{
    int iterations = 0;
    double residual = x * x * x -k;
    while (fabs(residual) > tolerance &&
            (iterations < maxiterations))
    {
         x = x - (x * x * x - k) / (3.0 * x * x);
         residual = x * x * x - k;
         iterations++;
    }
}
