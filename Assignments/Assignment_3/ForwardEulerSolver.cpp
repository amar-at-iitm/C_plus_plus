#include "ForwardEulerSolver.hpp"

ForwardEulerSolver::ForwardEulerSolver(){}

ForwardEulerSolver::~ForwardEulerSolver(){}

double ForwardEulerSolver :: RightHandSide(double y, double t) {
return 1+t;
}

double ForwardEulerSolver :: SolveEquation(){

    initialValue = initialValue + (stepSize * RightHandSide(initialValue, initialTime));
    initialTime = initialTime + stepSize;
    return initialValue;
}