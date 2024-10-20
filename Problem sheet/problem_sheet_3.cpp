#include <iostream>
using namespace std;
class counter{   
    public:
    static unsigned int a;
    counter(){};
    counter(unsigned int b){a=b;}
    counter operator ++();
    void get_count(){
        cout<<"The current count is ="<<a<<endl;
    }
    
};
class employee{
    private:
    int e_num;
    float e_comp;
    counter c1;
    public:
    employee (){ ++c1; };
    void set_data(int a, float b);
    void display_data();
    void emp_count();
};

unsigned int counter::a=0;
int main (){
    
    int m=0;
    float n=0;
    cout<<"Enter the employee number"<<endl;
    cin>>m;
    cout<<"Enter the employee compensation"<<endl;
    cin>>n;
    employee e1;
    e1.set_data(m,n);
    e1.display_data();
    e1.emp_count();

    cout<<"Enter the employee number"<<endl;
    cin>>m;
    cout<<"Enter the employee compensation"<<endl;
    cin>>n;
    employee e2;
    e2.set_data(m,n);
    e2.display_data();
    e2.emp_count();

    return 0;
}
void employee::set_data(int a, float b){
    e_num=a;
    e_comp=b;
}
void employee::emp_count(){
    cout<<"current imployee count is ="<<c1.a<<endl;
}
void employee::display_data(){
    cout<< " Employee number is ="<<e_num<<endl;
    cout<<" Enployee compansation is ="<<e_comp<<endl;
}
counter counter::operator ++(){ return counter(++a);}