
#include<iostream>

// u = (1, 2, 3)^T, v = (6, 5, 4)^T, A = , B = 
// This code evaluates w = u - 3v

int main (int argc, char *argv[])
{
    double u[3] = {1.0, 2.0, 3.0};
    double v[3] = {6.0, 5.0, 4.0};
    double A[3][3] = {{1.0, 5.0, 0.0},
                      {7.0, 1.0, 2.0},
                      {0.0, 0.0, 1.0}};
    double B[3][3] = {{-2.0, 0.0, 1.0},
                      {1.0, 0.0, 0.0},
                      {4.0, 1.0, 0.0}};

    double w[3];
    for (int i = 0; i < 3; i++)
    {
        w[i] = u[i] - 3.0 * v[i];
    }
    return 0;
}

// exercise define vectors x, y and z and matrices C and D, such that 
// x = u - v,
// y = Au,
// Z = Au - v,
// C = 4A - 3B,
// D = AB.
// extend the above program calculate all the above vectors and matrices 
// by using for loops where ever needed.
// add statements to visualise the arrays in a human readable format.