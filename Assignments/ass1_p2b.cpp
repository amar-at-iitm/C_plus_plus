#include <iostream>
#include <cassert>
using namespace std;

void Multiply(double A[][20], double B[][20], double AB[][20], int m, int n,int p, int q) {

     assert (("Matrix multiplication is not possible",n==p));
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
void Multiply(double V[], double B[][3], double BV[], int m,int p, int q) {

    assert (("Matrix multiplication is not possible",m==q));
  
    for (int i = 0; i<p; i++)
    { 
        BV[i] = 0;
      for (int j = 0; j<m ; j++)
       {    
            BV[i] += B[i][j]*V[j];
        }
    }
}

int main (){
    int m,p,q;
    m=3;
    p=3;
    q=3;
    double u[3] = {1.0, 2.0, 3.0};
    double V[3] = {6.0, 5.0, 4.0};
    double A[3][3] = {{1.0, 5.0, 0.0},
                      {7.0, 1.0, 2.0},
                      {0.0, 0.0, 1.0}};
    double B[3][3] = {{-2.0, 0.0, 1.0},
                      {1.0, 0.0, 0.0},
                      {4.0, 1.0, 0.0}};
    double BV[3];

    cout<<"B = "<<endl;
        for (int i=0; i<p; i++)
        { for ( int j=0; j<q; j++)
             {
            cout<<B[i][j]<<" ";
             }
             cout<<endl;
        }

    
Multiply(V, B,BV, m,p,q);


int s = sizeof(BV)/sizeof(BV[0]);
    cout<<"VB = [";
        for (int i=0; i<s; i++) 
        {
            cout<<BV[i]<<" ";
        }
    cout<<"]";


return 0;
}
