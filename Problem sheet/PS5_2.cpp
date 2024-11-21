#include <iostream>
using namespace std;
class vector{
    private:
    
    public:
    double x,y,z;
    vector():x(0),y(0),z(0){}
    vector( double a, double b, double c): x(a), y(b), z(c){}
    void printV(){
        cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    }
    double one_norm ();
    double two_norm ();
    double infinity_norm();
    vector operator +(vector p2);
    vector operator -(vector p2);
    vector operator *(vector p2);
    vector operator /(vector p2);
    vector operator *(double d);
    vector operator /(double d);
    double operator[](int index); 
};
int main (){
    vector v1(2,0,1), v2(0,1,0), v3(2,0,1);
    vector v4=v2/4;
    v4.printV();
    
    vector v5=v2*4;
    v5.printV();

    vector v6=v2 + v1;
    v6.printV();


    return 0;
}

double vector:: one_norm (){
double a=abs(x); double b=abs(y); double c=abs(z);
return a+b+c;
}
double vector:: two_norm (){
double a=abs(x)*abs(x); double b=abs(y)*abs(y); double c=abs(z)*abs(z);
return pow(a+b+c,1/2);
}
double vector:: infinity_norm(){
double a=abs(x); double b=abs(y); double c=abs(z);
return max(a,b,c);
}
vector  vector :: operator +(vector p2){
        double a= x + p2.x;
        double b= y + p2.y;
        double c= z + p2.z;
        return vector(a,b,c);
    }
vector vector :: operator -(vector p2){
        double a= x - p2.x;
        double b= y - p2.y;
        double c= z - p2.z;
        return vector(a,b,c);
    }
vector vector :: operator *(vector p2){
        double a= x*p2.x;
        double b= y*p2.y;
        double c= z*p2.z;
        return vector(a,b,c);
    }
vector vector :: operator /(vector p2){
        double a= x/p2.x;
        double b= y/p2.y;
        double c= z/p2.z;
        return vector(a,b,c);
    }
vector vector :: operator *(double d){
        double a= d*x; 
        double b= d*y;
        double c= d*z;
        return vector(a,b,c);
    }
vector vector :: operator /(double d){
        double a= x/d;
        double b= y/d;
        double c= z/d;
        return vector(a,b,c);
    }
double vector:: operator [](int index) {
        if (index == 0) return x;
        else if (index == 1) return y;
        else if (index == 2) return z;
        else throw out_of_range("Index out of range"); // For invalid indices
    }