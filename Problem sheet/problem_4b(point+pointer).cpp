#include<iostream>
#include<cmath>
using namespace std;
class point{
    private:
    
    public:
    double x,y,z;
    point():x(0),y(0),z(0){}
    point( double a, double b, double c): x(a), y(b), z(c){}
    void printP(){
        cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    }
};
class matrix{
    int row;
    int col;
    matrix(int a, int b): row(a), col(b){
        double** A = new double* [row];
        for(int i=0; i<row; i++)
        {
          A[i]=new double[col];
        }
    }
    


};