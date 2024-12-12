#include<iostream>
using namespace std;

int main(){
    int a, b, i, s;                 // defining the variables
        s=0;
        cout << " Enter two numbers one by one";
        cin >> a;                    // taking enteries from user
        cin >> b;
        for (i=a; i<=b; i++){
            s+=i;                   // suming the integers
        };
        cout << "Sum of the intergers between " << a <<" and "<< b <<" =" <<s;// showing the result

    return 0;
}