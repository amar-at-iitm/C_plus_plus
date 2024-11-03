#ifndef RK4THORDER
#define RK4THORDER
#include "AbstractOdeSolver.hpp"


class RK_4th_order : public AbstractOdeSolver 
{   private:

    public:
    double RightHandSide(double y, double t); 
    double SolveEquation();

};

#endif