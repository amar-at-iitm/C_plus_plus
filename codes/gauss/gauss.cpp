
#include "gauss.hpp"
#include <iostream>
#include <cmath>

// the default constructor 
// this is set for [-1,1] interval
// for 3 gauss points
Gaussquad::Gaussquad()
{
	// gauss points 
	quad_pt[0] = - sqrt(3.0 / 5.0);
	quad_pt[1] = 0.0;	
	quad_pt[2] =   sqrt(3.0 / 5.0);	// ideally one should use "quad_pt[0]"

	// gauss weights 
	quad_wt[0] = 5.0 / 9.0;
	quad_wt[1] = 8.0 / 9.0;	
	quad_wt[2] = 5.0 / 9.0;		// ideally one should use "quad_wt[0]"

}

double Gaussquad::integrate (double (*func) (double))
{
	double result = 0.0;
	for (int i = 0; i < 3; i++) {
		result += quad_wt[i] * func (quad_pt[i]);
	}
	return result;
}