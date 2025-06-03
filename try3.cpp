#include <iostream>
#include <assert.h>
using namespace std;
 
 void Multiply ( double A[][10], double B[][10],int m, int n, int p, int q){

   
     int AB[m][q];
 
    for (int i = 0; i < m; i++)
     {
        for (int j = 0; j < q; j++) 
        {
            AB[i][j] = 0;
 
            for (int k = 0; k < n; k++) 
            {
                AB[i][j] += A[i][k] * B[k][j];
            }

        }

    }
     // printing the new matrix
    cout << "Multiplication of given two matrices is:\n";
    cout<<"AB = "<<endl;
        for (int i=0; i<m; i++)
        { for ( int j=0; j<q; j++)
             {
            cout<<AB[i][j]<<" ";
             }
             cout<<endl;
        }
        
    
 }

int main()
   {
    int m,n,p,q;
    cout<<"enter the dimentions of the matrix"<<endl;
    cin>>m>>n>>p>>q;
     assert (("Matrix multiplication is not possible",n!=p));
     
    double A[10][10], B[10][10];
    
cout<< "Enter the elements for A"<< endl;
        for (int i=0; i<m; i++)
           {for(int j=0; j<n; j++)
            cin>> A[i][j];
            } 
cout<< "Enter the elements for B" << endl;
        for (int i=0; i<p; i++)
           {for(int j=0; j<q; j++)
            cin>> B[i][j];
            } 
Multiply ( A, B, m, n, p, q);
    return 0;
   }