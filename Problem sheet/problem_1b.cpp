#include<iostream>  
using namespace std; 

int main(int argc, char *argv[]) 
     {  int n,m;                      //declare n and m to be  integers
        cout<<"Enter two integers:\n ";    //out put to screen 
        cin>>n>>m;                    //input will be assigned to n,m 
       if(n>m)                        //if n is bigger than m, swap them
       {     
         int temp=n;    //declare temp and initialize it 
         n=m;           //assign value of m to n  
         m=temp;        //assign value of temp to m 
        } 
    
       double sum=0.0 ; 
       
       for(int i=n;i<=m;i++)    //aloop, i changes from n to m with increment 1 each time 
         {
            sum+=(i*i); //sum+=(i*i) means sum=sum + (square of i)
         } 
       cout<<"Sum of squares of integers from "<<n<<" to "<<m  <<" is: "<<sum<<endl;
       
       return 0;    
  }