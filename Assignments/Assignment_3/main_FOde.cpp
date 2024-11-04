#include "AbstractOdeSolver.hpp"
#include "ForwardEulerSolver.hpp"
#include <iostream>
#include <fstream>
using namespace std;


int main(){
    double y=2.0,t0=0.0, tn=1.0, h1=0.1, h2=0.05;
    /*
     cout<<"Enter initial vaule of y "<<endl;
    cin>>y;
    cout<<"Enter initial time t0 "<<endl;
    cin>>t0;
    cout<<"Enter step sizes h1 and h2 "<<endl;
    cin>>h1>>h2;
    cout<<"Enter final time tn "<<endl;
    cin>>tn;
    */
    int n=(tn - t0)/h1;
   
    ForwardEulerSolver E1;
    E1.SetStepSize(h1);         
    E1.SetTimeInterval(t0, tn);
    E1.SetInitialValue(y);
 
    string filename = "FOde_output1.csv";     // Filename for output 
    ofstream outFile(filename);             // Opening file to write the results
    if (!outFile.is_open()) {
        cerr << "Error opening file!" << endl;
        exit(1);
    }
    
    outFile << "t, y\n";                    // Write the initial values to file
    outFile << t0 << ", " << y << "\n";
    for(int i=0; i<n; i++)
    {
        y = E1.SolveEquation();
        t0 = t0 + h1;
        outFile << t0 << ", " << y << endl;
    }    
    outFile.close(); 
///////////////////////////////////////////////////////////////////////////////////////////////

    y=2.0,t0=0.0, tn=1.0, h2=0.05;
    int m=(tn - t0)/h2;
    ForwardEulerSolver E2;
    E2.SetStepSize(h2);         
    E2.SetTimeInterval(t0, tn);
    E2.SetInitialValue(y);
 
    filename = "FOde_output2.csv";     // Filename for output 
    ofstream outFile1(filename);             // Opening file to write the results
    if (!outFile1.is_open()) {
        cerr << "Error opening file!" << endl;
        exit(1);
    }
    
    outFile1 << "t, y\n";                    // Write the initial values to file
    outFile1 << t0 << ", " << y << "\n";
    for(int i=0; i<m; i++)
    {
        y = E2.SolveEquation();
        t0 = t0 + h2;
        outFile1 << t0 << ", " << y << endl;
    }    
    outFile1.close(); 
 
    return 0;
}