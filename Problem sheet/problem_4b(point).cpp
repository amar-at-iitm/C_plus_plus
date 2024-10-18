#include<iostream>
#include<cmath>
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
    vector operator +(vector p2);
    vector operator -(vector p2);
    vector operator *(vector p2);
    vector operator /(vector p2);
    vector operator *(double d);
    vector operator /(double d);
};
class matrix {
    private:
    vector A[3];
    public:
    matrix(){};
    matrix (vector p1, vector p2, vector p3){A[0]=p1; A[1]=p2; A[2]=p3;}
    void printM(){
       // cout<<"[";
        for(int i=0; i<3; i++){
            A[i].printV();
           // if (i=3)cout<<"]";
           //else 
           // cout<<A[i].x;
        }     
    }
    double det();
    matrix transpose ();
    matrix adj ();
    matrix inverse ();
    matrix operator * (double x);
    bool singular();
};

int main(){
    vector v1(2,0,1), v2(0,1,0), v3(2,0,1);
    matrix m1{v1,v2,v3};
    m1.printM();
    /*
    vector v4=v2/4;
    v4.printV();
    matrix m3=m1.transpose();
    m3.printM();
    matrix m4=m1.adj();
    m4.printM();
    */
    bool a1=m1.singular();
    cout<<a1<<endl;
    matrix m2=m1.inverse();
    m2.printM();
    double b=m1.det();
    cout<<"determinant of matrix is ="<<b<<endl;
    return 0;
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
double matrix :: det(){
    vector a=A[0],b,c;
    double e,f,g;
    e=(A[1].x) / (A[0].x);
    f=(A[2].x) / (A[0].x);
    b=A[1] - (A[0]*e);
    c=A[2] - (A[0]*f);
    g=(c.y) / (b.y);
    c=c - (b*g);
    return (a.x) * (b.y) * (c.z);
}
matrix matrix :: inverse (){
    double d=det();
    if (d==0)
    {
        cout<<"singular matrix! cannot find inverse."<<endl;
        exit(1);
    }
    else{
 vector p1,p2,p3;
    matrix b=adj();
    matrix c = b.transpose();
    matrix m=c*(1/d);
    cout<<"using scalar multiple function"<<endl;
    //m.printM();
    /*
     p1=c.A[0]/d;
    p2=c.A[1]/d;
    p3=c.A[2]/d;
return matrix(p1,p2,p3);
    */
   
 return m;
    }
   
}

matrix matrix :: transpose (){
    vector p1,p2,p3;
    p1.x=A[0].x; p1.y=A[1].x; p1.z=A[2].x;
    p2.x=A[0].y; p2.y=A[1].y; p2.z=A[2].y;
    p3.x=A[0].z; p3.y=A[1].z; p3.z=A[2].z;
return matrix(p1,p2,p3);
}
matrix matrix :: adj (){
    vector p1, p2, p3;
    p1.x= (A[1].y)*(A[2].z)-(A[1].z)*(A[2].y);
    p1.y= -((A[1].x*A[2].z)-(A[1].z*A[2].x));
    p1.z=(A[1].x*A[2].y)-(A[1].y*A[2].x);
    p2.x= -((A[0].y*A[2].z)-(A[0].z*A[2].y));
    p2.y= (A[0].x*A[2].z)-(A[0].z*A[2].x);
    p2.z= -((A[0].x*A[2].y)-(A[0].y*A[2].x));
    p3.x=(A[0].y*A[1].z)-(A[0].z*A[1].y) ;
    A[2].y= -((A[0].x*A[1].z)-(A[0].z*A[1].x));
    p3.z=(A[0].x*A[1].y)-(A[0].y*A[1].x) ;
    return matrix(p1,p2,p3);
}
//defining a boolean return type function
bool matrix::singular(){
    /*
     matrix a1(A[0],A[1],A[2]);
return ( a1.det()==0 ) ? true : false;//this is the main syntax for checking
    */
    return(det()==0)?false:true;
}
matrix matrix::operator * (double x){
    matrix mat;
    mat.A[0]=A[0]/x;
    mat.A[1]=A[1]/x;
    mat.A[2]=A[2]/x;
return  mat;
}

