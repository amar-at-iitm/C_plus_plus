
#include <iostream>
using namespace std;

int main ()
{
    /*
    int i = 5;
    int* pi;
    pi = &i;

    cout << "the value of pi is the address of i which is = " << pi << endl;
    cout << "the variable that pi points to is i whose value is *pi = " << *pi << endl;
    */

    // Pointers as arrays;
    /*
    double *a;
    int n;
    cout << "Enter a number for the array length" << endl;
    cin >> n;
    
    a = new double [n];

    for (int j = 0; j < n; j++) a[j] = j + j * j;
    //for (int j = 0; j < n; j++) cout <<"the"<< j << " th value of a is " << a[j] << endl;
    delete [] a;

    cout << "This is after deletion" << endl;


    for (int j = 0; j < n; j++) cout <<"the" << j << " th value of a is " << a[j] << endl;

    */
    // Multiple Pointers

    // 1st Example
    /*
    int** mx;
    mx = new int* [100];

    for (int i = 0; i < 100; i++) mx[i] = new int [20]; // for each i create array of length 20
    // Populate the array entries
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 20; j++) {
            mx[i][j] = i + 2 * j;
        }
    }
    */

    // 2nd Example  
    // n by n lower triangular or symmetric matrix 
    /*
    int n = 20;
    double** ltm;
    ltm = new double* [n];
    for (int i = 0; i < n ; i++) ltm[i] = new double [i + 1];
    // allocate (i+1) elements for row i

    for (int i = 0; i < n; i++) // access its elements 
        for (int j = 0; j <= i ; j++)
            ltm[i][j] = 2.1 / (i + j + 1);

    for (int i = 0; i < n; i++) delete[] ltm[i];
    delete [] ltm; // after using it , delete space
    */

    // Constant Pointers
    /*
    int m = 1, n = 5;
    int* const q = &m; // q is a constant pointer points to m 

    //q = &n; // should give error q cannot change
    *q = n; // value that q points to is n now

    cout << "the value of m now is = " << m << endl; 
    */

    int m = 1, n = 5;
    const int *p = &m; // p points to m, so *p becomes 1
    // âˆ—p = n; // error , âˆ—p can not change explicitly
    int i = *p; // *p = m = 1, so i = 1
    cout << "the value of i is " << i << endl;
    m = 3; // m = 3, so *p becomes 3
    int j = *p; // *p = 3, so j = 3
    cout << "the value of j is " << j << endl;
    p = &n; // ok, p itself can change, *p = 5
    int k = *p; // *p = n = 5, so k = 5
    cout << "the value of k is " << k << endl;

    return 0;
}