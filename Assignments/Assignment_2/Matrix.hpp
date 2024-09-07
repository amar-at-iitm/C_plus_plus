#ifndef MATRIXHEADERDEF
#define MATRIXHEADERDEF
#include "Vector.hpp"

class Matrix{
private:
unsigned int mNumRows, mNumCols; //storing number of rows and columns
double** mdata= new double *[mNumRows]; // a pointer to pointer of double precision FPV
public:
Matrix ( const Matrix& source);//Overridden copy cunstructor
// two arguments constructor to allocate memory for matrix and set the initial entries to zero
Matrix(unsigned int numRows, unsigned int numCols); 
//overridden destructor to delocate the memory of matrix
~Matrix();
void SetMatrix();
void  Print_Matrix()const;
int row_count() const; // public method for accessing the number of rows 
int col_count() const; // public method for accessing the number of columns
// Overloading round bracket oparator for acessing A(i,j)
double& operator () (int i, int j);
// Overloading assignment, unary and binary oparators
Matrix& operator=(const Matrix& otherMatrix);
Matrix operator +(const Matrix& M2) const;
Matrix operator -(const Matrix& M2) const;
Matrix operator *(const Matrix& M2) const;
Vector operator *( Vector& x) const;
Matrix operator *(double& a) const;
//public method to compute the determinant of square matrix
double determinat () const;

};

#endif