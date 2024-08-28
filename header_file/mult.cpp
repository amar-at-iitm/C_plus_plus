#include <iostream>
#include "product.h"  //<product.h>
// Quotation marks tell the compiler to look in the local directory first
// before checking standard directories
using namespace std;
int main(){
    cout<<product(4,5)<<endl;

    return 0;
}