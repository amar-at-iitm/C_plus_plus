#include<iostream>  
#include<math.h>  
using namespace std; 

int main(int argc, char *argv[]) 
     { 
    
    long double sum1=0.0, sum2=0.0 ,i,j,s,r; 
       
       for( i=1.0;i<2;i+=0.1)    // this loop increments 0.1 each time into i
         {
            s=sin(i);       // assigning value of sin(i) to s
            sum1+=sin(i);   //sum+=sin(i) means sum=sum + value of sin(i)
            cout<<"sin("<<i<<")="<<s<<"\n";
            
         } 
         cout<<"Total sum of sin values = "<<sum1<<endl;
          for( j=1.0;j<15.6;j+=0.1)    // this loop increments 0.1 each time into j
         {
            r=exp(j);       // assigning value fo exp(i) to r
            sum2+=exp(j);   //sum+=sin(i) means sum=sum + value of exp(i)
            cout<<"exp("<<j<<")="<<r<<"\n";
            
         } 
         
         cout<<"Total sum of exp values = "<<sum2<<endl;
      
       return 0;    
  }