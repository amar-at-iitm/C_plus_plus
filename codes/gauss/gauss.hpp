#ifndef GAUSSQUAD
#define GAUSSQUAD


class Gaussquad 
{
	private:
		double quad_pt[3];
		double quad_wt[3];
	public:
		Gaussquad ();							// default constructor

		// this has not be defined 
		// this should be used to generalise the class
		Gaussquad (double* pt, double* wt);		// multi-arg constructor

		double integrate (double (*func) (double));	// the quadrature rule
};








#endif
