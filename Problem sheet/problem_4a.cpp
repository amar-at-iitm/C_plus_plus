#include<iostream>
#include <cmath>
using namespace std;

class Point{
private:
    double x,y,z;
public:
Point():x(0),y(0),z(0){}
Point(double a, double b, double c) : x(a), y(b), z(c) {}


Point negate();
double norm( );
void print();

};

int main(){
    Point p1(2,3,4);
    p1.print();

    Point p2 = p1.negate();
    
    p2.print();
    double m=p1.norm();
    cout<<"norm of p1 ="<<m<<endl;




 return 0;   
}
/*
Point Point::negate(){ 
    this ->x=-x;
    this ->y=-y;
    this ->z=-z;
    return Point(x,y,z);
}
*/
Point Point::negate(){ 
    Point negp;
    negp.x=-x;
    negp.y=-y;
    negp.z=-z;
    return negp;
}


void Point::print(){
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
double Point::norm(){
    double a=0.0, b=0.0,n=0.0;
    int p;
    double v[3]={x,y,z};
    cout<<"enter the value of p for norm"<<endl;
    cin>>p;
    for(int i=0; i<3; i++)
    {
        b=abs(v[i]);        // finding absolute value of v[i] using <cmath>
        a+=pow(b,p);        // finding pth power using <cmath>
    }
    n = pow(a, 1.0 / p);    //Finding pth root using <cmath>
    return n;
}