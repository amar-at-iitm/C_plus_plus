#include <iostream>
#include <cassert> //using <casser> header file to use "assert"
#include <cmath>    // using <cmath> header file to use "abs" and "pow" functions
using namespace std;

void printMatrix(double** matrix, int rows, int cols);
void printVector( double* V, int s);
void Multiply ( double** A, double** B,int m, int n, int p, int q);
void Multiply ( double* v, double** A,int m, int n, int p);
void Multiply ( double** A, double* v,int m, int n, int p);
void Multiply ( double a, double** A,int m, int n);
void Multiply ( double** A, double a,int m, int n);
double p_norm(double* v, int n, int p);
 

int main()
   {
    double id=0; // Declearing index for the program
    cout<<"1.0 -> Matrix Multiplication"<<endl;
    cout<<"2.1 -> vectro and matrix multiplication"<<endl;
    cout<<"2.2 -> Matrix and vector Multiplication"<<endl;
    cout<<"2.3 -> Scalar and matrix Multiplication"<<endl;
    cout<<"2.4 -> Matrix and Scalar Multiplication"<<endl;
    cout<<"3.0 -> calculate P-Norm of a vector"<<endl;
    
    cout<< "Please enter one of the above numbers to compute the respective operation"<<endl;
    cin>>id;
    if (id==1.0){
        int m=0,n=0,p=0,q=0; // Declearing variables for the dimension of the matrices
        cout<<"enter the dimentions of first matrix"<<endl;
        cin>>m>>n; // taking dimension of first matrix from keyboard
        double** A=new double *[m]; // definign matrix using pointers
        for(int i=0; i<m; i++)
        {
          A[i]=new double[n];
        }
        cout<< "Enter the elements for A"<< endl;
        for (int i=0; i<m; i++)
        {for(int j=0; j<n; j++)
            cin>> A[i][j];      // taking elements into the matrix
        } 
        cout<<"enter the dimentions of 2nd matrix"<<endl;
        cin>>p>>q;
        double** B= new double *[p];
        for (int i=0; i<p; i++)
        {
           B[i]= new double[q];     // taking elements into the matrix
        }
    
        cout<< "Enter the elements for B" << endl;
        for (int i=0; i<p; i++)
        {for(int j=0; j<q; j++)
            cin>> B[i][j];
        }
        cout<< "Matrix A="<<endl;
        printMatrix(A,m,n);
        cout<< "Matrix B="<<endl;
        printMatrix(B,p,q);
        Multiply ( A, B, m, n, p, q);// calling the multiply function which will multiply and print the result
        
    }
    else if (id==2.1){
        int m=0,n=0,r=0;
        cout<<"enter the dimentions of vector"<<endl; 
        cin>>r;
        double* v;
        v = new double[r];
        cout<< "Enter the elements for vector " << endl;
        for (int i=0; i<r; i++)
        {
            cin>> v[i];
        }
        cout<<"enter the dimentions of matrix"<<endl;
        cin>>m>>n;
        double** A=new double *[m];
        for(int i=0; i<m; i++)
        {
          A[i]=new double[n];
        }
        cout<< "Enter the elements for A"<< endl;
        for (int i=0; i<m; i++)
        {for(int j=0; j<n; j++)
            cin>> A[i][j];      // taking elements into the matrix
        } 
        cout<< "Vector v="<<endl;
        printVector(v,r);
        cout<< "Matrix A="<<endl;
        printMatrix(A,m,n);
        Multiply ( v, A, m, n,r);// calling the multiply function which will multiply and print the result
    }
    
     else if (id==2.2){
        int m=0,n=0,r=0;
        cout<<"enter the dimentions of matrix"<<endl;
        cin>>m>>n;
        double** A=new double *[m];
        for(int i=0; i<m; i++)
        {
          A[i]=new double[n];
        }
        cout<< "Enter the elements for A"<< endl;
        for (int i=0; i<m; i++)
        {for(int j=0; j<n; j++)
            cin>> A[i][j];      // taking elements into the matrix
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
        cout<< "Matrix A="<<endl;
        printMatrix(A,m,n);
        cout<< "Vector v="<<endl;
        printVector(v,r);
        Multiply ( A, v, m, n,r);// calling the multiply function which will multiply and print the result
    }
    
     else if (id==2.3){
        int m=0,n=0;
        double a;
        cout<<"Enter the scalar"<<endl;
        cin>>a;
        cout<<"enter the dimentions of matrix"<<endl;
        cin>>m>>n;
        double** A=new double *[m];
        for(int i=0; i<m; i++)
        {
          A[i]=new double[n];
        }
        cout<< "Enter the elements for A"<< endl;
        for (int i=0; i<m; i++)
        {for(int j=0; j<n; j++)
            cin>> A[i][j];      // taking elements into the matrix
        } 
        
        cout<< "Scalar a = "<<a<<endl;
        cout<< "Matrix A="<<endl;
        printMatrix(A,m,n);
        Multiply ( a, A, m, n);// calling the multiply function which will multiply and print the result
    }
    
     else if (id==2.4){
        int m=0,n=0;
        cout<<"enter the dimentions of matrix"<<endl;
        cin>>m>>n;
        double** A=new double *[m];
        for(int i=0; i<m; i++)
        {
          A[i]=new double[n];
        }
        cout<< "Enter the elements for A"<< endl;
        for (int i=0; i<m; i++)
        {for(int j=0; j<n; j++)
            cin>> A[i][j];      // taking elements into the matrix
        } 
        double a;
        cout<<"Enter the scalar"<<endl;
        cin>>a;
        cout<< "Matrix A="<<endl;
        printMatrix(A,m,n);
        cout<< "Scalar a = "<<a<<endl;
        Multiply ( A, a, m, n);  // calling the multiply function which will multiply and print the result
    }
    
     else if (id==3.0){
        int c=2, // using variable 'c' to setting the default value of p to 2
        d=0; // defining the variable to get the dimension of the vactor
        cout<<"Default value set for p is 2"<<endl;
        //cout<<"Enter the value of p "<<endl;
        // cin>>c;
        cout<<"Now, enter the dimentions of vector"<<endl; 
        cin>>d;  //getting the dimension of the vector from keyboard
        double* v;  // defining the vecor using pointer
        v = new double[d];
        cout<< "Enter the elements for vector " << endl;
        for (int i=0; i<d; i++)
        {
            cin>> v[i];     // taking elements into the vector
        }
        
        double x = p_norm(v,d,c); //calling the p-norm functin and storing the norm value into x
        cout<<"p norm of vector v = "<<x;  // printing the norm value of the vactor
    }
    else {
        cout<<" Sorry! You entered a wrong number. Please try again..."<<endl;
        
    }

    return 0;
   }


 // difining a function to print matrices
 void printMatrix(double** matrix, int rows, int cols) 
{

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl; // for separating rows
    }
}
// defining a function to print vectors
void printVector( double* V, int s)
{
    cout<<" = [";
        for (int i=0; i<s; i++) 
        {
            cout<<V[i]<<" ";
        }
    cout<<"]"<<endl; //for separating rows
}
//defining "Multiply" function to multiply two matrices, and showing result
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

// function overloading: for multiplying a vector and a matrix, and showing result
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

// function overloadinga: for multiplying a matrix and a vector, and showing result
void Multiply ( double** A, double* v,int m, int n, int p)
 {
    assert (("Matrix multiplication is not possible",n==p));
    double* Av;
    Av = new double[m];
    for (int i = 0; i<m; i++)
    { 
        
      for (int j = 0; j<n ; j++)
       {    
            Av[i] = 0;
            Av[i] += A[i][j]*v[j];
        }
    }
    // printing the new vector
     cout<<"Multiplication of given matrix and vector is: "<<endl;
    printVector(Av,m);
}

// function overloading: for multiplying a scalar and a matrix, and showing result
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

// function overloading: for multiplying a matrix and a scalar, and showing result
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
// Defining "p-norm" function to compute the p-norm of any n dimensional vector
double p_norm(double* v, int n, int p){
    double x=0.0,y=0.0,z=0.0;
    for(int i=0; i<n; i++)
    {
        y=abs(v[i]);        // finding absolute value of v[i] using <cmath>
        x+=pow(y,p);        // finding pth power using <cmath>
    }
    z = pow(x, 1.0 / p);    //Finding pth root using <cmath>

    return z;
}