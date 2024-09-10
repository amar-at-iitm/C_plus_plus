#include <iostream>
using namespace std;
#include "Matrix.hpp"
#include "Vector.hpp"
#include "LinearSystem.hpp"

int main (){
    cout<<"Enter the size of matrix of Linear System Ax=b"<<endl;
    unsigned int a,b;
    cin>>a>>b;
    LinearSystem L1(a,b);
    cout<<"The solution to the above system is "<<endl;
    Vector V1(a);
    V1=L1.Solve();
    V1.PrintVector();
    return 0;
}