#ifndef FORWARDEULERSOLVERDEF
#define FORWARDEULERSOLVERDEF
#include "AbstractOdeSolver.hpp"


class ForwardEulerSolver : public AbstractOdeSolver
{
private:
   
public:
    ForwardEulerSolver();
    ~ForwardEulerSolver();
    double RightHandSide(double y, double t);
    double SolveEquation();   
};

#endif