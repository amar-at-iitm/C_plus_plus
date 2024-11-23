#include <iostream>
using namespace std;


int main (){
    int A[7]={1,2,5,0,3,1,7};
    for(int i=1; i<7; i++)
    {
        if( A[i-1]>A[i] && A[i+1]>A[i])
        {cout<<A[i];}
        
    }

    return 0;
}