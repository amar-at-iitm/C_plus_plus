#include<iostream>
using namespace std;

class employee
{
    private:
    int e_num;
    float e_comp;

    public:
    void enter_data(int a, float b){
        e_num=a;
        e_comp=b;

    }
    void show_data(){
        cout<<"Employee number is "<<e_num<<endl;
        cout<<"Employee compensation is "<<e_comp<<endl;
    }


};

int main(){
    employee e1,e2,e3;
    int num;
    float comp;
    cout<<"Enter the employee number of first employee"<<endl;
    cin>>num;
    cout<<"Enter the employee compensation of first employee"<<endl;
    cin>>comp;
    e1.enter_data(num,comp);

    cout<<"Enter the employee number of second employee"<<endl;
    cin>>num;
    cout<<"Enter the employee compensation of second employee"<<endl;
    cin>>comp;
    e2.enter_data(num,comp);

    cout<<"Enter the employee number of third employee"<<endl;
    cin>>num;
    cout<<"Enter the employee compensation of third employee"<<endl;
    cin>>comp;
    e3.enter_data(num,comp);

    e1.show_data();
    e2.show_data();
    e2.show_data();
   



}