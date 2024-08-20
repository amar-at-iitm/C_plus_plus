#include<iostream>  
#include<math.h>  
using namespace std; 

int main(int argc, char *argv[]) 
     { 
        int i,n;
        float fact=1;
        cout<<" Enter the integer to generate it's factorial \n";
        cin>>n;
        for(i=1; i<=n; i++)
        {
            fact*=i;
        }
        cout<<" Factorial of "<<n<<" = "<<fact;

        return 0; 
     }