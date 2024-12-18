
#include <iostream>

using namespace std;

int main ()
    {
    int a, b; // declare a and b as integers 

    // intialise a and b through user input.
    cout << "Please enter the interger a" << endl; // prompt the user to input
    cin >> a; // input will be asigned to a
    cout << "please enter the integer b" << endl;
    cin >> b;
    
    // anything inside the scope of the control statement is only 
    // executed if the "if" statement is true.
    // otherwise the program skips the entire scope and moves on.
    // even though a < b compiler will still compile whatever is inside.
    if (a>b) // if a > b then we need to swap 
        {
        cout <<"since a > b we need to swap between them";
        int temp = a; // temp only exists inside this scope 
        a = b;
        b = temp;
        cout << "after swapping";
        cout << "the value of a =" << a << " the value of b = " << b << endl;
        }// we have come out with the values of a and b swapped

    
    double sum = 0.0;

    // do the addition in a loop 
    // First choice 
    // int i = a;
    for (int i = a; i <= b; i++)
        {
        sum += i; // sum = sum + i
        }
    // Second choice 
    //int i = a;
    //while (i <= b)
    //    {
    //    sum += i;
    //    i++;
    //    }

    // display the sum to the screen 
    cout << "sum of the integers from " << a << " to " << b << "="
            << sum << endl;

    return 0; // the program ends here
    }