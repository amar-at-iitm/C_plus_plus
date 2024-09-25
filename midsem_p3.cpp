#include <iostream>
#include <sstream>
#include <string>
using namespace std;
 
 int main(){
    cout<<"Enter an integer"<<endl;
    int a;
    cin>>a;
    string str=to_string(a);
    int b=str.length();
    cout<<"The Number of digits in the given integer is "<< b<<endl;
    return 0;
 }