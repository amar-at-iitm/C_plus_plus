#include <iostream>
#include <cmath>
using namespace std;

void print(int v, int b=10)
{
    int i=0;
    while (pow(b,i)<v)
    {
        i++;
    }
    int s[i];
    int n=i-1;
     for (int j = 0; j < i; j++) {
        int m=v/pow(b, n);
        s[j] = m;   //during exam I stuck at this place and tried to do this using another for loop 
        v = v-(m*pow(b, n));          
        n--;                         
    }
    cout<<"Decimal number in base "<<b<<" represented as"<<endl;
    cout<<"[";
    for(int l=0;l<i;l++)
    {
        cout<<s[l];
    }
    cout<<"]"<<endl;
}
int main(){
    cout<<"Enter the decimal number to convert "<<endl;
    int x; cin>>x;
    cout<<"Enter the base "<<endl;
    int b; cin>>b;
print(x,b);
    return 0;
}