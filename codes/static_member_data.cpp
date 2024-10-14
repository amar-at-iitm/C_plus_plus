
// statdata.cpp
// static class data
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class foo
{
    private:
        static int count;       //only one data item for all objects
                                //note: â€œdeclarationâ€ only!
    public:
        foo()
        { count++; }            //increments count when object created

        int getcount()
        { return count; }       //returns count

};
//--------------------------------------------------------------

int foo::count = 0;       //*definition* of count

////////////////////////////////////////////////////////////////
int main()
{
    foo f1; //, f2, f3;        //create three objects
    cout << "count is " << f1.getcount() << endl;  //each object

    foo f2, f3;
    cout << "count is " << f2.getcount() << endl;  //sees the
    cout << "count is " << f3.getcount() << endl;  //same value
    cout << "count is " << f1.getcount() << endl;  //each object
    return 0;
}