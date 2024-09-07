#include <cmath>
#include <iostream>
#include <cassert>
#include "Matrix.hpp"
using namespace std;

Matrix::Matrix(unsigned int numRows, unsigned int numCols){
    mNumRows= numRows; mNumCols= numCols;
    for(int i=0; i<mNumRows; i++)    mdata[i]=new double[mNumCols];
    for (int i = 0; i < mNumRows; i++)
    {
        for (int j = 0; j < mNumCols; j++)   mdata[i][j] = 0;      
    }
};
Matrix :: Matrix ( const Matrix& source){
    mNumRows=source.mNumRows;
    mNumCols=source.mNumCols;
    for(int i=0; i<mNumRows; i++)    mdata[i]=new double[mNumCols];
    for (int i = 0; i < mNumRows; i++)
    {
        for (int j = 0; j < mNumCols; j++)   mdata[i][j] = source.mdata[i][j];     
    }
};
Matrix :: ~Matrix(){
    delete mdata;
};

void Matrix :: SetMatrix(){
    cout<<"Enter the elements for the given matrix"<<endl;
    for(int i=0; i<mNumRows; i++)
    { 
        for(int j=0; j<mNumCols; j++)     cin>>mdata[i][j];
    }
}
void Matrix :: Print_Matrix() const {    
    for (int i = 0; i < mNumRows; i++) 
    {
        for (int j = 0; j <mNumCols; j++)    cout << mdata[i][j] << " ";
        cout << endl; // for separating rows
    }
}
int Matrix :: row_count() const{ 
    return mNumRows;}; 
int Matrix :: col_count() const{
     return mNumCols;}; 
// Overloading round bracket oparator for acessing A(i,j)
double& Matrix :: operator () (int i, int j){
return mdata[i-1][j-1];
};

// Overloading assignment, unary and binary oparators

Matrix& Matrix :: operator=(const Matrix& otherMatrix){
    assert(("Matrices assignment is not possible",mNumCols==otherMatrix.mNumCols && mNumRows==otherMatrix.mNumRows));
    for (int i = 0; i < mNumRows; i++)
    {
        for (int j = 0; j < mNumCols; j++)  mdata[i][j] = otherMatrix.mdata[i][j];      
    } 
	return *this;
}

Matrix Matrix :: operator +(const Matrix& M2) const{
    assert(("Matrix addition is not possible",mNumCols==M2.mNumCols && mNumRows==M2.mNumRows)); 
    Matrix m1(mNumRows,mNumCols);
    for (int i = 0; i < mNumRows; i++)
    {
        for (int j = 0; j < mNumCols; j++)  m1.mdata[i][j] = mdata[i][j] + M2.mdata[i][j];      
    }
    return m1;
};
Matrix  Matrix :: operator -(const Matrix& M2) const{
    assert(("Matrix subtraction is not possible",mNumCols==M2.mNumCols && mNumRows==M2.mNumRows));
    Matrix m1(mNumRows,mNumCols);
    for (int i = 0; i < mNumRows; i++)
    {
        for (int j = 0; j < mNumCols; j++)   m1.mdata[i][j] = mdata[i][j] - M2.mdata[i][j];      
    }
    return m1;
};
Matrix  Matrix :: operator *(const Matrix& M2) const{
   assert (("Matrix multiplication is not possible",mNumCols==M2.mNumRows));
    Matrix m1(mNumRows,M2.mNumCols);
    for (int i = 0; i < mNumRows; i++)
    {
        for (int j = 0; j < M2.mNumCols; j++) 
        {
           for(int k=0; k<M2.mNumCols; k++) m1.mdata[i][j] += mdata[i][j] * M2.mdata[i][j];
        }       
    }
    return m1;
};
Vector  Matrix :: operator *( Vector& x) const{
    int p=x.GetSize();
    assert (("Matrix multiplication is not possible",mNumRows==p));
    Vector v1(mNumCols);
    for (int i = 0; i<mNumCols; i++)
    { 
        v1[i] = 0;
        for (int k = 0; k<mNumRows ; k++)     v1[i] += x[k] * mdata[k][i];
    }
    return v1;
};
Matrix  Matrix :: operator * (double& a) const{
    int m=row_count();  
    int n=col_count(); 
    Matrix m1(m,n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)  m1.mdata[i][j] = mdata[i][j] *a;      
    }
    return m1;
};
double  Matrix ::  determinat () const{
    assert(mNumRows == mNumCols);  // Checking for square matrices
    int n = mNumRows;
    double d = 1.0; 
    // Copy matrix data to avoid modifying the original matrix
    double** tempData = new double*[n];
    for (int i = 0; i < n; ++i)
    {
        tempData[i] = new double[n];
        for (int j = 0; j < n; ++j)     tempData[i][j] = mdata[i][j];               
    }

    for (int i = 0; i < n; ++i)
    {
        int pivot = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (std::abs(tempData[j][i]) > std::abs(tempData[pivot][i]))
            {
                pivot = j;
            }
        }
            
        if (pivot != i)
        {
            std::swap(tempData[i], tempData[pivot]);
            d *= -1;
        }
            
        if (tempData[i][i] == 0)
        {
            // Free tempData memory
            for (int k = 0; k < n; ++k)     delete[] tempData[k]; 
            delete[] tempData;
            return 0;
        }
            
        d *= tempData[i][i];
        for (int j = i + 1; j < n; ++j)
        {
            double factor = tempData[j][i] / tempData[i][i];
            for (int k = i + 1; k < n; ++k)      tempData[j][k] -= factor * tempData[i][k];
        }
    }

    // Free tempData memory
    for (int i = 0; i < n; ++i)      delete[] tempData[i]; 
    delete[] tempData;
        
    return d;
};
