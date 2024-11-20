#include <iostream>
#include <cmath>
using namespace std;
void solve( double number) {
   printf ( "%.4f", number );
}

class tfunction{
    private:
    double a0,a1,a2,a3,e1,s1,c1;
    public:
    tfunction(double a=0, double b=0, double c=0, double d=0, double e=0, double f=0, double g=0)
    {a3=a; a2=b; a1=c; a0=d;e1=e; s1=f; c1=g;};
    double f(double x) {
        return (a3*x*x*x + a2*x*x +a1*x +a0 +e1*exp(x) +s1*sin(x) + c1*cos(x));
    }
   tfunction derivative();
   void show_function();
};
class root_finder{
    private:
    float tol;
    double a,b;

    public:
    root_finder(){};
    root_finder(float t, double x, double y){tol=t;a=x;b=y;}
    
    double bisection(tfunction f2);
    double newton_raphson(tfunction f2);
    /*
    double secant(tfunction f2);
    
*/

};

int main(){
    double a,b,c,d,e,f,g;
    cout<<"Enter the cofficients where the given function of the form"<<endl;
    cout<<" a3x^3 + a2x^2 + a1x + a1 +be^x + csinx + dcosx"<<endl;
    cin>>a>>b>>c>>d>>e>>f>>g;
   tfunction f1(a,b,c,d,e,f,g);
  // tfunction f1(0,1,0,-2,0,0,0);
    f1.show_function();
    double t,a1,b1;
    cout<<" Enter the value of tol, a,b in the same order"<<endl;
    cin>>t>>a1>>b1;
    double a2=f1.f(a1),b2=f1.f(b1);
    cout<<"value at a ="<<a2<<"value at b ="<<b2<<endl;
    root_finder rf1(t,a1,b1);
    
    double r=rf1.bisection(f1);
   
    cout<<"root of the function is ";
    solve(r);
    cout<<endl; 

    return 0;
}

double root_finder:: bisection(tfunction f2){
    
    if (f2.f(a)*f2.f(b)>0)
    {
        cout<<" there is no root between "<<a<<" and "<<b<<endl;
        exit(1);
    }
    double c=a;
    int i=0;
    while (i<100 && (b-a)>tol)
    {
       // Find middle point
        c = (a+b)/2;
 
        // Check if middle point is root
        if (f2.f(c) == 0.0)
            break;
 
        // Decide the side to repeat the steps
        else if (f2.f(c)*f2.f(a) < 0)
            b = c;
        else
            a = c; 
      i++;  
    }
    return c;
    
}
double root_finder:: newton_raphson(tfunction f2){
    tfunction df=f2.derivative();
   /*
    double x[100];
    double x[0]=f2.f(a)-(f2.f(a))/(df.f(a));
for(int i=1;i<100;i++)
{
   double x[i]=f2.f(a)-(f2.f(a))/(df.f(a));
   if((x[i]-x[i-1])<tol){
    double r=x[i];
    break;
   }
}
   */
  for (int i = 0; i < 100;i++) {
            double f_x0 = f2.f(a);
            double df_x0 = df.f(a);
            if (fabs(f_x0) < tol) {
                return a;
            }
            if (fabs(df_x0) < tol) {
                cerr << "Derivative is too small, may cause division by zero." << endl;
                return NAN;
            }

            a = a - f_x0 / df_x0;
        }
        return a;

//return r;
}
/*
double root_finder:: secant(tfunction f2){

}

*/
tfunction tfunction::derivative(){
    tfunction tq(0,3*a3,2*a2,a1,e1,-c1,s1);
return tq;
}
void tfunction::show_function(){
    if(a3!=0){cout<<a3<<"x^3 ";}
    if(a2!=0){cout<<" + "<<a2<<"x^2 ";}  
    if(a1!=0){cout<<" + "<<a1<<"x";}  
    if(a0!=0){cout<<" + "<<a0;}
    if(e1!=0){cout<<" + "<<e1<<"e^x";}
    if(s1!=0){cout<<" + "<<s1<<"sinx";}
    if(c1!=0){cout<<"+ "<<c1<<"cosx";}
    cout<<endl;
    }
