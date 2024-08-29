#include <iostream>
#include <cmath>
using namespace std;

double p_norm(double v[], int n, int p){
    double x=0.0,y=0.0,z=0.0;
    for(int i=0; i<n; i++)
    {
        y=abs(v[i]);
        x+=pow(y,p);        // finding pth power using <cmath>
    }
    z = pow(x, 1.0 / p);    //Finding pth root using <cmath>

    return z;
}

int main(){
    int n,p=2;
    cout<<"enter the size of the vector"<<endl;
    cin>>n;

    double v[n];
    for(int i=0; i<n; i++)
    cin>>v[i];

   double a = p_norm(v,n,p);

   cout<<"p norm of vector v = "<<a;

    return 0;
}