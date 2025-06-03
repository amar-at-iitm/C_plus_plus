#include <iostream>
#include <assert.h>
using namespace std;
 
 
 void printMatrix(double** matrix, int rows, int cols) {

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl; 
    }
}
void printVector( double* V, int s)
{
    cout<<" = [";
        for (int i=0; i<s; i++) 
        {
            cout<<" "<<V[i];
        }
    cout<<"]"<<endl;
}

void Multiply ( double** A, double** B,int m, int n, int p, int q)
 {
    assert (("Matrix multiplication is not possible",n==p));
     double** AB=new double *[m];
    for(int i=0; i<m; i++)
    {
        AB[i]=new double[q];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++) 
        {
            AB[i][j] = 0;
            for (int k = 0; k < n; k++)  AB[i][j] += A[i][k] * B[k][j];
        }
        
    }
     // printing the new matrix
        cout<<"Multiplication of given two matrix is: "<<endl;
        printMatrix(AB,m,q);
}


void Multiply ( double* v, double** A,int m, int n, int p)
 {
     assert (("Matrix multiplication is not possible",m==p));
     double* vA;
    vA = new double[n];
    for (int i = 0; i<n; i++)
    { 
        vA[i] = 0;
      for (int k = 0; k<m ; k++)
       {    
            vA[i] += v[k] * A[k][i];
        }
    }
    // printing the new vector
     cout<<"Multiplication of given vector and matrix is: "<<endl;
    printVector(vA,n);
}
void Multiply ( double** A, double* v,int m, int n, int p)
 {
    assert (("Matrix multiplication is not possible",n==p));
    double* Av;
    Av = new double[m];
    for (int i = 0; i<m; i++)
    { 
        Av[i] = 0;
      for (int j = 0; j<n ; j++)
       {    
            Av[i] += A[i][j]*v[j];
        }
    }
    // printing the new vector
     cout<<"Multiplication of given matrix and vector is: "<<endl;
    printVector(Av,n);
}

void Multiply ( double** A, double a,int m, int n)
 {
     double** Aa=new double *[m];
    for(int i=0; i<m; i++)
    {
        Aa[i]=new double[n];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            Aa[i][j] = 0;
            Aa[i][j] = A[i][j]*a;
        }
        
    }
     // printing the new matrix
        cout<<"Multiplication of given matrix with a scalar is: "<<endl;
        printMatrix(Aa,m,n);
}

void Multiply ( double a, double** A,int m, int n)
 {
    double** aA=new double *[m];
    for(int i=0; i<m; i++)
    {
        aA[i]=new double[n];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            aA[i][j] = 0;
            aA[i][j] =a*A[i][j];
        }
        
    }
     // printing the new matrix
        cout<<"Multiplication of given scalar and a matrix is: "<<endl;
        printMatrix(aA,m,n);
}

int main()
   {
    int m,n,p,q,r;
    cout<<"enter the dimentions of first matrix"<<endl;
    cin>>m>>n;
    double** A=new double *[m];
    for(int i=0; i<m; i++)
    {
        A[i]=new double[n];
    }
    cout<< "Enter the elements for A"<< endl;
        for (int i=0; i<m; i++)
        {for(int j=0; j<n; j++)
            cin>> A[i][j];
        } 

    cout<<"enter the dimentions of 2nd matrix"<<endl;
    cin>>p>>q;
    double** B= new double *[p];
    for (int i=0; i<p; i++)
    {
        B[i]= new double[q];
    }
    
    cout<< "Enter the elements for B" << endl;
        for (int i=0; i<p; i++)
        {for(int j=0; j<q; j++)
            cin>> B[i][j];
        }

    cout<<"enter the dimentions of vector"<<endl; 
    cin>>r;
    double* v;
    v = new double[r];
    cout<< "Enter the elements for vector " << endl;
        for (int i=0; i<r; i++)
        {
            cin>> v[i];
        }
double a;
cout<<"Enter the scalar"<<endl;
cin>>a;
cout<< "Matrix A="<<endl;
printMatrix(A,m,n);
cout<< "Matrix B="<<endl;
printMatrix(B,p,q);
cout<< "Vector v="<<endl;
printVector(v,r);
cout<< "Scalar a = "<<a<<endl;
Multiply ( A, B, m, n, p, q);
Multiply ( v, A, m, n,r);
Multiply ( A, v, m, n,r);
Multiply ( A, a, m, n);
Multiply ( a, B, m, n);


    return 0;
   }