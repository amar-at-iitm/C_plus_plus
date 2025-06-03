
#include <iostream>
using namespace std;

void printMatrix(int matrix[][n], int rows, int cols) {
    cout<<"A = "<<endl;
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
     int m,n;
      int A[m][n];
    cout<<"Enter the dimension of the matrix"<<endl;
    cin>>m>>n;
   
     cout<<"Enter the elements of the matrix A"<<endl;
     
    for (int i=0; i<m;i++)
        {for (int j=0; j<n;j++)
            {cin>>A[i][j];
            }
        }     
    printMatrix(A,m,n);

    return 0;
}