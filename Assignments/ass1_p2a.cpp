#include <iostream>
#include <cassert>
using namespace std;

void Multiply(double A[][3], double B[][3], double AB[][3], int m, int n,int p, int q) {

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
void Multiply(double V[], double B[][3], double VB[], int m,int p, int q) {

    assert (("Matrix multiplication is not possible",m==p));
  
    for (int i = 0; i<q; i++)
    { 
        VB[i] = 0;
      for (int k = 0; k<m ; k++)
       {    
            VB[i] += V[k] * B[k][i];
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
    double VB[3];

    cout<<"B = "<<endl;
        for (int i=0; i<p; i++)
        { for ( int j=0; j<q; j++)
             {
            cout<<B[i][j]<<" ";
             }
             cout<<endl;
        }

    
Multiply(V, B,VB, m,p,q);
int s = sizeof(VB)/sizeof(VB[0]);
    cout<<"VB = [";
        for (int i=0; i<s; i++) 
        {
            cout<<VB[i]<<" ";
        }
    cout<<"]";


return 0;
}
