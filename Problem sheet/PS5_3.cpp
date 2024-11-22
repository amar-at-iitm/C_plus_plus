#include <iostream>
#include <cmath>
using namespace std;
class complex{
    private:
    double x,y;
    public:
    complex (){};
    complex(double a=0, double b=0){x=a; y=b;}
    void show();
    complex conjugate ();
    complex operator +(complex a);
    complex operator -(complex a);
    complex operator *(complex a);
    complex operator /(complex a);
    double  conjugate_product ();
    complex  operator *(double a);
    complex  operator /(double d);


};

int main(){
complex z1(1,-5);
z1.show();
complex z2(4,1);
z2.show();
cout<<"complex division"<<endl;
complex z3=z1/z2;
z3.show();
cout<<"complex multiplication"<<endl;
complex z4=z1*z2;
z4.show();
cout<<" Scalar Multiplication"<<endl;
complex z5=z1*5;
z5.show();
cout<<"scalar division"<<endl;
complex z6=z1/5;
z6.show();
cout<<"conjugate product of z1 ="<<z1.conjugate_product()<<endl;
cout<<"conjugate product of z2 ="<<z2.conjugate_product()<<endl;
    return 0;
}
void complex :: show() {
    if (y<0){ cout<<x<<y<<"i"<<endl;}
    else{cout<<x<<"+"<<y<<"i"<<endl;}
}

complex complex :: conjugate (){return complex (x,-y);}
double complex :: conjugate_product (){
    double a=abs(x); double b=abs(y);
    return (a*a + b*b);}

complex complex :: operator +(complex a){
return complex(x+a.x, y+a.y);
}
complex complex :: operator -(complex a){
return complex(x-a.x, y-a.y);
}

complex complex :: operator *(complex a){
return complex(x*a.x - y*a.y, x*a.y + y*a.x);
}
complex complex :: operator *(double a){
return complex(a*x, a*y);
}
complex complex :: operator /(double d){
    return complex(x/d, y/d);
}
complex complex :: operator /(complex a){
    complex c1(x,y);
    complex c2=a.conjugate();
    complex c3=c1*c2;
double b= a.conjugate_product();
return c3/b;
}

