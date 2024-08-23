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

void printMatrix(double matrix[][20], int rows, int cols) {

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl; 
    }
}


int main() {
    double A[20][20], B[20][20], AB[20][20];
    int m,n,p,q;

    cout<<"Enter the dimension of the matrix A"<<endl;
    cin>>m>>n;
    cout<<"Enter the elements of the matrix A"<<endl;
    for (int i=0; i<m;i++)
    {   for (int j=0; j<n;j++)
        {
            cin>>A[i][j];
        }
    }

    cout<<"Enter the dimension of the matrix B"<<endl;
    cin>>p>>q;
    cout<<"Enter the elements of the matrix B"<<endl;
    for(int i=0; i<p;i++)
    {   for (int j=0; j<q;j++)
        {
            cin>>B[i][j];
        }
    }
     cout<<"A = "<<endl;
    printMatrix(A,m,n);

    cout<<"B = "<<endl;
    printMatrix(B,m,n);
    
    Multiply(A, B, AB, m,n,p,q);

    cout << "Product of A and B is \n";
    cout<<"AB = "<<endl;
    printMatrix(AB, m, q);

    return 0;
}