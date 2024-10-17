#include<iostream>
using namespace std;
class matrix{
    int row;
    int col;
    matrix(int a, int b): row(a), col(b)
    {
        double** A = new double* [row];
        for(int i=0; i<row; i++)
        {
          A[i]=new double[col];
        }
    }
};

int main(){





    
}