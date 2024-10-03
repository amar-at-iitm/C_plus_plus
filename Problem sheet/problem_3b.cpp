#include<iostream>
using namespace std;
class serial{
private:
unsigned int s_num;
static unsigned int count;
public:

//serial(): s_num(0){}

serial()
{
    count++;
    s_num=count;
}


 void counter(){count++;}
void show_serial(){
cout<<"I am object number "<<s_num<<endl;
}

};
unsigned int serial::count=0;
int main(){
    
    serial s1;
    s1.show_serial();
  
    serial s2;
    s2.show_serial();
    serial s3;
    s3.show_serial();

    s1.show_serial();


return 0;
}