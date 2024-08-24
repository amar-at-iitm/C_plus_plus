#include <iostream>
#include <cassert>
using namespace std;


void printMatrix(double A[][3]) {
    int m= sizeof(A);
    int n= sizeof(A)/sizeof(A[0]);
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << A[i][j] << " ";
        }
        cout << endl; 
    }
}

void printVector( double A[])
{
    int s = sizeof(A);
    cout<<" = [";
        for (int i=0; i<s; i++) 
        {
            cout<<A[i]<<" ";
        }
    cout<<"]";
}

void Multiply(double A[][3], double B[][3]) {
    int m= sizeof(A);
    int n= sizeof(A)/sizeof(A[0]);
    int p= sizeof(B);
    int q= sizeof(B)/sizeof(B[0]);

    assert (("Matrix multiplication is not possible",n==p));
    double AB[m][q];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < q; ++j) {
            AB[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                AB[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
// Function overloading
void Multiply(double V[], double A[][3]) {
    int m= sizeof(A);
    int n= sizeof(A)/sizeof(A[0]);
    int p= sizeof(V);
    assert (("Matrix multiplication is not possible",m==p));
    double VA[n];
    for (int i = 0; i<n; i++)
    { 
        VA[i] = 0;
      for (int k = 0; k<m ; k++)
       {    
            VA[i] += V[k] * A[k][i];
        }
    }
}
void Multiply( double A[][3], double V[]) {
    int m= sizeof(A);
    int n= sizeof(A)/sizeof(A[0]);
    int p= sizeof(V);
    assert (("Matrix multiplication is not possible",m==p));
    double AV[m];
    for (int i = 0; i<m; i++)
    { 
        AV[i] = 0;
      for (int j = 0; j<n ; j++)
       {    
            AV[i] += A[i][j]*V[j];
        }
    }
}
void Multiply(double a, double B[][3] )
{
    int m= sizeof(B);
    int n= sizeof(B)/sizeof(B[0]);
    double aB[m][n];
    for (int i = 0; i<m; i++)
    { 
      for (int j = 0; j<n ; j++)
       {    
            aB[i][j] = 0;
            aB[i][j] = a*B[i][j];
        }
    }
}
void Multiply( double B[][3], double a) {
    int m= sizeof(B);
    int n= sizeof(B)/sizeof(B[0]);
    double Ba[m][n];
    for (int i = 0; i<m; i++)
    { 
      for (int j = 0; j<n ; j++)
       {    
            Ba[i][j] = 0;
            Ba[i][j] = B[i][j]*a;
        }
    }
}


int main(){
    
    double a= 1.5;
    double v[3]={1.0, 2.3, 4.1};
    double A[3][3]={{1.2, 3.5, 2.6},
                    {4.2, 5.1, 9.9},
                    {0.2, 0.0, 1.0}};
    double B[3][3]={{3.3, 5.1, 7.0},
                    {2.5, 7.1, 8.5},
                    {0.0, 3.0, 6.0}};
    printMatrix(A);
    printMatrix(B);

    Multiply(A,B);
    printMatrix(AB);

    Multiply(v,A);
    printVector(vA);

    Multiply(A,v);
    printVector(Av);
   
    Multiply(a,B);
    printMatrix(aB);

    Multiply(B,a);
    printMatrix(Ba);

    return 0;
}

