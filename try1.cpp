#include <iostream>
using namespace std;

int main(){

    int m,n;
    cout<<"Enter the dimension of the matrix";
    cin>>m>>n;
     
    double A[m][n];

cout<< "Enter the elements for A"<< endl;
        for (int i=0; i<m; i++)
           {for(int j=0; j<n; j++)
            cin>> A[i][j];
            } 

    cout<<"A = "<<endl;
        for (int i=0; i<m; i++)
        { for ( int j=0; j<n; j++)
             {
            cout<<A[i][j]<<" ";
             }
             cout<<endl;
        }
    return 0;
}