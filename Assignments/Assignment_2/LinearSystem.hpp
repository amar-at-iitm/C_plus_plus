#ifndef LINEARSYSTEMHEADERDEF
#define LINEARSYSTEMHEADERDEF
#include "Matrix.hpp"
#include "Vector.hpp"
class LinearSystem {
private:
unsigned int mSize;
Matrix* mpA;
Vector* mpb;
LinearSystem ( const LinearSystem& source); //overridden copy constructor set into private to prevent accidental coping
public:
LinearSystem(unsigned int a, unsigned int b);
~LinearSystem();
Vector Solve();
};

#endif 