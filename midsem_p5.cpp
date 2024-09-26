#include <iostream>
#include <cmath>
using namespace std;

class func{
    private:
    double a0,a1,a2,a3,a4,a5,a6;
    public:
    func(double g, double f, double e, double d, double c, double b, double a)
    {a6=g; a5=f; a4=e; a3=d; a2=c; a1=b; a0=a;};
    double f(double x) {
        return (a6*pow(x,6) + a5*pow(x,5) + a4*pow(x,4) + a3*x*x*x + a2*x*x +a1*x +a0);
    }
   double integrate(double x0=-1, double x1=1);
  // void show_function();
};
class gauss_quad{
    private:
    double* gp=new double [3];
    double* gw=new double [3];
    public:
    gauss_quad(){gp[0]=0; gp[1]=-sqrt(3/5);gp[2]=sqrt(3/5);gw[0]=8/9;gw[1]=5/9;gw[2]=5/9;};
    double gd( func f2);
};
int main (){
    double a,b,c,d,e,f;
    cout<<"Enter the cofficients where the given polynomia upto degree 5 is of the form"<<endl;
    cout<<" a5x^5 + a4x^4 + a3x^3 + a2x^2 + a1x + a0"<<endl;
    cin>>a>>b>>c>>d>>e>>f;
   func f1(0,a,b,c,d,e,f);
   double i=f1.integrate(-1,1);
   gauss_quad gq1;
   double g=gq1.gd(f1);
   if (i==g){
    cout<<"quadrature is exact"<<endl;
   }
   else{
    cout<<"quadrature is not exact"<<endl;
   }

    return 0;
}
double func::integrate(double x0, double x1){
    func f(a5/6,a4/5,a3/4,a2/3,a1/2,a0,0);
    double i1=f.f(x0);
    double i2=f.f(x1);
    return double (i2-i1);
}
double gauss_quad::gd (func f2){
    double r= gw[0]*f2.f(gp[0]) + gw[1]*f2.f(gp[1]) + gw[2]*f2.f(gp[2]);
    return r;
}