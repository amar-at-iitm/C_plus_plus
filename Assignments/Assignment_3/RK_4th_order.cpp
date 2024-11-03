#include "RK_4th_order.hpp"
#include <iostream>
using namespace std;
double RK_4th_order :: RightHandSide(double y, double t) {
return 1+t;
}
double RK_4th_order :: SolveEquation(){
    
    double k1=stepSize*RightHandSide(initialValue, initialTime);
    double k2=stepSize*RightHandSide(initialValue + (0.5*k1), initialTime + (0.5*stepSize));
    double k3=stepSize*RightHandSide(initialValue + (0.5*k2), initialTime + (0.5*stepSize));
    double k4=stepSize*RightHandSide(initialValue + k3, initialTime + stepSize);
    
    initialValue = initialValue + (k1 + (2*k2) + (2*k3) + k4)/6;
    initialTime = initialTime + stepSize; 

return initialValue;
}